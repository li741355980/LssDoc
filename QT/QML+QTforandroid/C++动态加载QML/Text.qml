 import QtQuick 2.0

Rectangle{ 
	id : root 
	width: 200 ; 
	height:200
 	color:"green" 
	property alias lbtext : lb.text 
	Rectangle { 
		width: 100 
		height: 100 
		border.color: "#99ccff"
		 border.width: 4
 		radius: 10 
		Text{ 
			id:lb 
			text:"andy"
 			anchors.centerIn: parent 
			color:"red" 
		} 
		MouseArea{ 
			anchors.fill: parent 
			drag.target: parent 
			drag.axis: drag.XAndYAxis 
			drag.maximumX: root.width - parent.width 
			drag.maximumY: root.height - parent.height 
		} 
	}
}
