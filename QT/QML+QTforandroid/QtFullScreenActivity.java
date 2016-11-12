package an.qt.helloQtQuickApp;  
import android.content.Context;  
import android.content.Intent;  
import android.app.PendingIntent;  
import android.util.Log;  
import android.os.Bundle;  
import android.view.WindowManager;  
  
public class QtFullscreenActivity extends org.qtproject.qt5.android.bindings.QtActivity  
{  
	private final static String TAG = "QtFullscreen";  
	@Override  
	public void onCreate(Bundle savedInstanceState) {  
		super.onCreate(savedInstanceState);  
		getWindow().addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);  
	}  
}  
