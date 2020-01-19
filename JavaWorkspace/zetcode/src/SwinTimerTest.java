
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.Timer;


public class SwinTimerTest extends JApplet {
	
	private JButton jB3;
	private JButton jB2;
	private JButton jB1;
	
	private JButton jb[];
	
	private FlowLayout l;
	private Timer timer;
	
	

	public void init(){
		action a = new action(); 
		timer = new Timer(2000,a);
		timer.start();
	}

	public class action implements ActionListener{

		private int i=0;

		@Override
		public void actionPerformed(ActionEvent e) {
			
			if(i==5)
				timer.stop();
			
			jb[i] = new JButton("no:::"+i);
			
			i++;
		}
		
	}
	
}

/*
import java.awt.*;
 import java.applet.Applet;

 public class myButtons extends Applet {
     Button button1, button2, button3;
     public void init() {
         button1 = new Button("Ok");
         button2 = new Button("Open");
         button3 = new Button("Close");
         add(button1);
         add(button2);
         add(button3);
     }
 }
*/