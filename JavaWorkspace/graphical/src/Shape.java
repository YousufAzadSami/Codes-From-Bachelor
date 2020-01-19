import javax.swing.JPanel;
import java.awt.Graphics;
import java.awt.Color;



public class Shape extends JPanel 
{
	public final int  WIDTH = 100;
	public final int  HEIGHT = 100;
	public int w,h;
	
	public void paintComponent( Graphics g )
	{
		super.paintComponent(g);
		
		
		h=getHeight() ; w=getWidth();
		System.out.printf("height %d :: width %d\n", h , w);
		h=h/2;
		w=w/2;
		int i =10;
		System.out.printf("half\nheight %d :: width %d\n", h , w);
		
		System.out.printf("1:%d .. 2:%d .. 3:%d .. 4:%d\n", h-i , w-i , h+i , w+i);
		
		
		for(i = 0 ; i<291 ; i=i+10)
		{
			g.setColor(Color.BLACK);
			g.drawRect(10,10,HEIGHT+i ,WIDTH+i);
			g.drawOval(10 , 10 , HEIGHT+i , WIDTH+i);
			g.drawLine(10 , 10 , HEIGHT+i , WIDTH+i);
			
		
			
			g.setColor(Color.LIGHT_GRAY);
			g.drawRect(10,10,HEIGHT+i ,WIDTH+i);
			g.drawOval(10 , 10 , HEIGHT+i , WIDTH+i);
			g.drawLine(10 , 10 , HEIGHT+i , WIDTH+i);

			
		}
		
		
		System.out.printf("1:%d .. 2:%d .. 3:%d .. 4:%d\n", 10 , 10,HEIGHT+i ,WIDTH+i);
		
		/*
		//for(i=10; i<140 ; i+=10)
		//{
			//g.drawRect( 220 , 230 , 240 , 250 );
			g.drawRect( h-i , w-i , h+i , w+i );
			g.drawOval( h-i , w-i , h+i , w+i );
			g.drawLine( h-i , w-i , h+i , w+i );
		//}
		 
		 
		
		for(i=0;i<500;i++)
		{
			g.drawOval( 240 , 0 , 50 , 50 );
		}
		*/
		 
		 
	}
}
