import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JApplet;

public class JAppletPaintRunWithCurrentThread extends JApplet {

	public void init() {
		setSize(400, 600);
		setBackground(Color.YELLOW);
		
	}

	public void paint(Graphics g) {
		g.drawRect(20, 20, 70, 50);
		/*
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		*/
		
		g.drawRect(50,50,100,500);
		
		int i =0;
		
		while(true){
			g.drawRect(i+10,i+10,30,30);
			
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		
		
	}
	/*
	public void run(){
		while(true){
			g.drawRect(i+10,i+10,30,30);
			
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}*/
}
