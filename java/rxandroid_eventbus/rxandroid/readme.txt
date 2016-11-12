RXJAVA版本是1.0.10 在安卓下面默认找不到sun.misc.Unsafe这个库   解决方式是，project-->properties-->javabuildpath移除jre库，在添加jre库就行了


RXAndroid找不到com.google.autovalue库，没有找到好的方法解决，直接移除了View 和Wight封装的包就可以了