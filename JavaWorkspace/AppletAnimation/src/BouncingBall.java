
import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Image;


public class BouncingBall extends Applet implements Runnable {
	
	
	public int x=20 , y=100;
	
	
	private Image dbImage;
	private Graphics dbg;
	
	private long start;
	private long passedTime;
	private final double ACCALERTION = .3;
	private static final long SLEEP_TIME = 2;


	
	
	public void init()
	{
		
		setBackground(Color.black);
		setSize(500, 500);
	}
	
	public void start()
	{
		Thread t = new Thread(this);
		t.start();
	}

	
	public void change()
	{
		//x++;
		//y = (int) (y + ACCALERTION);
		passedTime = System.currentTimeMillis() - start ;	
		
		
		y = (int) ((passedTime*passedTime * ACCALERTION)/1000);		// ACCALERTION
		//y = (int) ((passedTime * ACCALERTION)/1000);				// VELOCIY
		
		showStatus("Elsaped time:" + passedTime);
	}
	
	public void run()
	{
		start= System.currentTimeMillis();
		while(true)
		{
			
			if(x>=400 || y>=400)
				break;
			change();
			repaint();
			
			try{
				Thread.sleep(SLEEP_TIME);
			}catch(Exception e){
				System.out.println("error occured");
			}
		}
		
	}
	
	
	public void update (Graphics g)
	{
		// Initialisierung des DoubleBuffers
		if (dbImage == null)
		{
			dbImage = createImage (this.getSize().width, this.getSize().height);
			dbg = dbImage.getGraphics ();
		}

		// Bildschirm im Hintergrund löschen
		dbg.setColor (getBackground ());
		dbg.fillRect (0, 0, this.getSize().width, this.getSize().height);

		// Auf gelöschten Hintergrund Vordergrund zeichnen
		dbg.setColor (getForeground());
		paint (dbg);

		// Nun fertig gezeichnetes Bild Offscreen auf dem richtigen Bildschirm anzeigen
		g.drawImage (dbImage, 0, 0, this);
	}
	
	
	
	public void paint(Graphics g)
	{
		g.setColor(Color.red);
		g.drawLine(0, 450, 500 , 450);
		g.fillOval(x, y, 50, 50);
	}

}
