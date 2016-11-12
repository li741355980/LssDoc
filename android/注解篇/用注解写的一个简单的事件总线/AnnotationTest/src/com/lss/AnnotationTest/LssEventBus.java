package com.lss.AnnotationTest;

import java.lang.reflect.Method;
import java.lang.reflect.Parameter;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;

public class LssEventBus {
	public static class MethodBundle{
		Method method;
		ThreadType type;
		public MethodBundle(Method m,ThreadType t){
			this.method=m;
			this.type = t;
		}
	}
	public static class Subcriber{
		public Object subcriber;
		public List<MethodBundle> methods;
		public Subcriber(Object subcriber){
			this.subcriber=subcriber;
			methods=new ArrayList<MethodBundle>();
		}
		public Subcriber(Object subcriber,List<MethodBundle> methods){
			this.subcriber=subcriber;
			this.methods=methods;
		}
		public void append(MethodBundle mb){
			methods.add(mb);
		}
	}
	public static class EventBundle{
		public List<Subcriber> subcribers;
		public EventBundle(){
			subcribers=new ArrayList<Subcriber>();
		}
		public void append(Subcriber sub){
			subcribers.add(sub);
		}
	}
	private HashMap<Class, EventBundle> mRegisters;
	private LssEventBus(){
		mRegisters=new HashMap<Class, EventBundle>();
	}
	private static LssEventBus mEventBus=new LssEventBus();
	public static LssEventBus getInstance(){
		return mEventBus;
	}
	public void post(Event sig){
		Class sigClass=sig.getClass();
		EventBundle eb=mRegisters.get(sigClass);
		if(eb!=null){
			for(Subcriber s:eb.subcribers){
				Object slotobj=s.subcriber;
				List<MethodBundle> mbs=s.methods;
				for (MethodBundle methodBundle : mbs) {
					if(ThreadType.MainThread==methodBundle.type){
						callMethod(slotobj, methodBundle.method,sig);
					}
				}
			}
		}
	}
	private void callMethod(Object target,Method m,Event sig){
		try {
			m.invoke(target,sig);
		} catch (Exception e) {
			// TODO: handle exception
		}
		
	}
	public void register(Object obj){
		Class mClass=obj.getClass();
		
		Method[] methods=mClass.getDeclaredMethods();
		List<MethodBundle> methodBundles=new ArrayList<MethodBundle>();
		for (Method method : methods) {
			//System.out.println("get method:"+method.getName());
			LssEventSubcriber les=method.getAnnotation(LssEventSubcriber.class);
			if(les!=null){
				if(method.getParameterCount()>1){
					continue;
				}
				Parameter[] parameters =  method.getParameters();
				if(!Event.class.isAssignableFrom(parameters[0].getType())){
					continue;
				}
				Class mObserverClass=les.eventClass();
				//System.out.println("observerclass:"+mObserverClass.getName());
				EventBundle eventBundle=mRegisters.get(mObserverClass);
				if(eventBundle == null){
					eventBundle = new EventBundle();
					mRegisters.put(mObserverClass, eventBundle);
				}
				Subcriber subcriber=getSubcriberInMap(obj,eventBundle);
				subcriber.append(new MethodBundle(method, les.runThread()));
			}
		}
	}
	private Subcriber getSubcriberInMap(Object obj,EventBundle eventBundle){
		for (Subcriber i : eventBundle.subcribers) {
			if(i.subcriber == obj){
				return i;
			}
		}
		Subcriber subcriber=new Subcriber(obj);
		eventBundle.append(subcriber);
		return subcriber;
	}

	public void unregister(Object obj){
		Iterator<Entry<Class, EventBundle>> iter = mRegisters.entrySet().iterator();
		while (iter.hasNext()) {
			Map.Entry entry = (Map.Entry) iter.next();
			Object key = entry.getKey();
			EventBundle eb = (EventBundle)entry.getValue();
			for (Subcriber i : eb.subcribers) {
				if(i.subcriber == obj){
					mRegisters.remove(key);
					return;
				}
			}
		}
	}
}
