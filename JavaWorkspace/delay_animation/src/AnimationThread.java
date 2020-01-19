import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.Toolkit;
import java.awt.RenderingHints;

import javax.swing.JPanel;



public class AnimationThread  extends JPanel implements Runnable{
	
	
	public Thread animator;
	
	private int x , y , numOfSec, sleepTime=10;
	private boolean flag=true;
	private boolean timeFlag = true;
	private long start, currentTime;
	private double gravity=.10, forward=1.5;
	

	
	
	public AnimationThread() {
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
		
		
		//g.drawRect(x, y, 50, 70);
		//g2d.draw3DRect(x, y+200, 30, 30, true);
		g.drawOval(x, y, 50, 50);
		Toolkit.getDefaultToolkit().sync();
		g.dispose();
	}
	
	public void change()
	{
		
		
		if(50 <= currentTime - start)
		{
			System.out.println("____"+ currentTime +"____");
			timeFlag=true;
			numOfSec++;
			y = (int)(y + (gravity * numOfSec));
		}
		/*
		if(y>385)
		*/
	
		if(x>390 || x<10)
			forward = -forward;
		
		x = (int) (x + forward);
	
		
	}
	
	public void run()
	{
		
		while(flag)
		{
			while(timeFlag)
			{
					start = System.currentTimeMillis();
					timeFlag=false;
					System.out.println("::::"+start+"::::");
			}
			currentTime = System.currentTimeMillis();
			change();
			repaint();
			
			
			if(x == 400)
				flag = false;
			
			try{
				Thread.sleep(sleepTime);
			}catch(Exception e){
				System.out.println("howdy succa!");
			}
		}
	}

}
