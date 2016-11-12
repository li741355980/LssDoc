package com.lss.AnnotationTest;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target(ElementType.METHOD)
@Retention(RetentionPolicy.RUNTIME)
public @interface LssEventSubcriber {
	public Class eventClass();
	public ThreadType runThread() default ThreadType.MainThread;
}
