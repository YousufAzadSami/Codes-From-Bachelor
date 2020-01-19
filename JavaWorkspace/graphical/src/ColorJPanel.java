import javax.swing.JPanel;

import java.awt.Color;
import java.awt.Graphics;

public class ColorJPanel extends JPanel{
	
	public void paintComponent( Graphics g)
	{
		super.paintComponent(g);
		this.setBackground(Color.BLACK);
		
		g.setColor( new Color( 255, 0, 0));
		g.fillRect(15, 25, 100, 20);
		g.drawString("Current RGB:" + g.getColor() , 130, 40);
		
		g.setColor( new Color(.5f , .75f , 0.0f));
		g.fillRect(15, 50 , 100 ,20);
		g.drawString( "Current RGB:" + g.getColor() , 130, 65);
		
		g.setColor( Color.PINK);
		g.fillRect(15, 75, 100, 20);
		g.drawString( "current RGB:" + g.getColor(), 130 , 90);
		
		Color c = Color.MAGENTA;
		g.setColor(c);
		g.fillRect(15, 100, 100, 20);
		g.drawString( "current RGB:" + c.getRed() + c.getGreen() + c.getBlue(), 130 , 115);
		
	}

}
