package com.lss.AnnotationTest;

public class AnnotationTest {
	public static class SlotClass{
		@LssEventSubcriber(eventClass=SigClass.class,runThread=ThreadType.MainThread)
		public void slot1(SigClass str1){
			System.out.println("this is SlotClass::slot1 para:"+str1.str1);
		}
		@LssEventSubcriber(eventClass=SigClass.class,runThread=ThreadType.MainThread)
		public void slot2(String str1,String str2){
			System.out.println("this is SlotClass::slot2 para:"+str1+"  "+str2);
		}
	}
	public static class SigClass extends Event{
		String str1;
		public SigClass(String str){
			str1=str;
		}
	}
	public static void main(String args[]){
		SlotClass slot=new SlotClass();
		LssEventBus.getInstance().register(slot);
		LssEventBus.getInstance().post(new SigClass("this is a string from sig"));
		LssEventBus.getInstance().unregister(slot);
	}
}
