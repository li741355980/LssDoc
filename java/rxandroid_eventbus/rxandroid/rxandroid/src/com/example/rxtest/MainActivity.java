package com.example.rxtest;

import rx.Observable;
import rx.Scheduler;
import rx.Subscriber;
import rx.Observable.OnSubscribe;
import rx.android.app.AppObservable;
import rx.android.schedulers.AndroidSchedulers;
import rx.functions.Action1;
import rx.functions.Func1;
import rx.schedulers.Schedulers;
import android.support.v7.app.ActionBarActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;

public class MainActivity extends ActionBarActivity {

	private boolean isMainThread(){
		return (Thread.currentThread().getId()==getMainLooper().getThread().getId());
	}
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
//		Observable<String> observable=Observable.create(new OnSubscribe<String>() {
//			@Override
//			public void call(Subscriber<? super String> t) {
//				// TODO Auto-generated method stub
//				Log.e("rx", "observable call: is mainthread?"+(isMainThread()));
//				t.onNext("hello rx world!");
//			}
//		});
		Observable.just("hello1", "hello2", "hello3")
		.subscribeOn(Schedulers.io())
		.map(new Func1<String, String>() {
			@Override
			public String call(String t) {
				// TODO Auto-generated method stub
				Log.e("rx", "map call: is mainthread?"+(isMainThread()));
				return t+" -lss";
			}
		}).observeOn(AndroidSchedulers.mainThread())
		.subscribe(new Action1<String>() {
			@Override
			public void call(String t) {
				// TODO Auto-generated method stub
				Log.e("rx", "Action1 onNext:"+t);
				Log.e("rx", "Action1:is mainthread?"+(isMainThread()));
			}
		});
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

	@Override
	public boolean onOptionsItemSelected(MenuItem item) {
		// Handle action bar item clicks here. The action bar will
		// automatically handle clicks on the Home/Up button, so long
		// as you specify a parent activity in AndroidManifest.xml.
		int id = item.getItemId();
		if (id == R.id.action_settings) {
			return true;
		}
		return super.onOptionsItemSelected(item);
	}
}
