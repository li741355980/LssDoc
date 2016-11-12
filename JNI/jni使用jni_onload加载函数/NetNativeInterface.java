package com.lssnetserver;

/**
 * Created by Administrator on 2015/10/19.
 */
public class NetNativeInterface {

   public  static native boolean buildUdpServer();
   public  static native boolean buildUdpClient();
   public static  native boolean sendto(String str);
}






