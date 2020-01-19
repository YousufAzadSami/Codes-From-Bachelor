import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;

/*
 <applet code="StatusWindow" width="600" height="50">
 </applet>
*/ 

public class StatusWindow extends Applet{
	
	public void init()
	{
		setBackground(Color.cyan);
	}
	
	public void paint(Graphics g)
	{
		g.drawString("This is in the applet window", 10,20);
		showStatus("This is shown in the status window.");
	}

}
