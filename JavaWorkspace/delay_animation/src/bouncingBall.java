import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


import javax.swing.JPanel;
import javax.swing.Timer;

public class bouncingBall extends JPanel implements ActionListener{
	
	Timer t = new Timer(7, this);
	int x=0, y=400;
	
	public void paintComponent(Graphics g)
	{
		super.paintComponent(g);
		
		g.setColor(Color.red);
		//g.drawLine(x, 40, 50, 50);	
		g.drawLine(x, 100, x+50, 100);
		g.drawLine(x, 101, x+50, 101);
		
		g.setColor(Color.orange);
		g.drawOval(500, y, 50,50);
														
											
		t.start();
		//if(x==700)
		//	t.stop();
				
	}
	
	public void actionPerformed(ActionEvent e)
	{
		x++;
		y--;
		
		if(x==700)
			x=0;
		if(y== -50 )
			y=400;
		
		
		repaint();
	}
	
	/*
	this code is equivalent to this C code
	for(int i=0; i<700; i++)
	{
		setColor(RED);
		circle(x, , , );
		
		delay(6);
		
		setColor(BLACK);
		circle(x, , , );
		
	} 
	 
	 */
	

}
