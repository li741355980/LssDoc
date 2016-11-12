package com.lss.AnnotationTest;

public enum ThreadType {
	MainThread(1),BackThread(2);
	public int type;
	ThreadType(int type){
		this.type=type;
	}
}
