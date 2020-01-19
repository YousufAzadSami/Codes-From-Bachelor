import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JPanel;


public class SimpleJPanelThread extends JPanel{
	private int i;

	public SimpleJPanelThread(){
		repaint();
		setBackground(Color.cyan);
	}
	
	public void paint(Graphics g){
		
		
		for(i=0;i<5;i++){
			System.out.println("in for: " +Thread.currentThread() + " " +i);
			g.drawRect(i*5, i*5, 40, 50);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
	}
}
