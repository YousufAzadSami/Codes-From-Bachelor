import java.awt.Graphics;
import java.swing.JPanel;

public class LineDrawing extends JPanel
{
	public void paintComponent( Graphics g)
	{
		super.paintComponent(g);

		int width = getWidth();
		int height = getHeight();

		//System.out.printf("the width is %d\n the height is %d\n",width,height);

		for(width,height;width> ; width= width-10,height=height+10)
		{
			g.drawling(0,0,width,height);
		}
	}

}