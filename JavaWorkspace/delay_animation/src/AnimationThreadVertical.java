
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.Toolkit;
import java.awt.RenderingHints;

import javax.swing.JPanel;



public class AnimationThreadVertical  extends JPanel implements Runnable{
	
	
	public Thread animator;
	
	private int x , y , sleepTime=10;
	private boolean flag=true;
	private boolean timeFlag = true;
	private long start, currentTime;
	private double  GRAVITY=1.25, 
					FORWARD=2.0,
					numOfSec , 
					TIME_INCREMENT =250;
	
		
	
	public AnimationThreadVertical() {
        setBackground(Color.black);
        setDoubleBuffered(true);

        
        x = 10;
        y = 10;
        
        
        RenderingHints rh = new RenderingHints(RenderingHints.KEY_ANTIALIASING,RenderingHints.VALUE_ANTIALIAS_ON);
        rh.put(RenderingHints.KEY_RENDERING, RenderingHints.VALUE_RENDER_QUALITY);
        
    }


	
	 public void addNotify() 
	 {
	        super.addNotify();
	        animator = new Thread(this);
	        animator.start();
	        
	       
	 } 
	 
	public void paint(Graphics g)
	{
		super.paint(g);
		Graphics2D g2d = (Graphics2D)g;
		
		g2d.setColor(Color.GREEN);
		g.drawOval(x, y, 50, 50);
		g.drawRect(10, 10, 465, 635);
		
		
		
		//g.drawRect(x, y, 50, 70);
		//g2d.draw3DRect(x, y+200, 30, 30, true);
		
		Toolkit.getDefaultToolkit().sync();
		g.dispose();
	}
	
	
	
	public void change()
	{
		
		
		if(Math.abs(TIME_INCREMENT) <= currentTime - start)
		{
			System.out.println("____"+ currentTime +"____");
			timeFlag=true;
			numOfSec = numOfSec + TIME_INCREMENT/1000;
			y = (int)(y + (GRAVITY * numOfSec));
			
			if(x>435 || x<10)
				FORWARD = -FORWARD;
			
			
		}
		
		//if(y>585 || numOfSec==0)
		if(y>585 || y<00) 
		{
			GRAVITY = - GRAVITY;
			TIME_INCREMENT = - TIME_INCREMENT;
			
		}
		
		//x = (int) (x + FORWARD);
		
		
		
		
		
	}
	
	public void run()
	{
		
		while(flag)
		{
			while(timeFlag)
			{
					start = System.currentTimeMillis();
					timeFlag=false;
					System.out.println("<<<<<"+start+">>>>>");
			}
			currentTime = System.currentTimeMillis();
			change();
			repaint();
			
			
			
			try{
				Thread.sleep(sleepTime);
			}catch(Exception e){
				System.out.println("howdy succa!");
			}
		}
	}

}
