import javax.swing.JPanel;

import java.awt.Color;
import java.awt.Graphics;


public class MovingBall extends JPanel {
	
	public void paintComponent( Graphics g)
	{
		int i,j=0;
		
		for(i=0; i<1000-115 ; i++)
		{
			g.setColor(Color.red);
			g.drawOval(i,40,100,100);
			
			
			try{
				Thread.currentThread();
				Thread.sleep(50);				
			}
			catch( Exception e)
			{
				System.out.println(e.getMessage());				
			}
			
			
			
			System.out.printf("%d puffy is printed\n",j++);
			
			g.setColor(Color.black);
			g.drawOval(i,40,100,100);
			
		}
		
		System.out.printf("so this is it\nWOW\n");
	}

}
