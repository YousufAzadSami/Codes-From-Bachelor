
import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionListener;



public class AppletClass extends Applet implements Runnable{
	
	private int x,y;
	private int xArrow = 50, yArrow=300;
	public boolean flag=true;
	Thread t;
	public boolean flagChange = false, arrowFlagChange = false;
	private static final int SLEEP_TIME = 5;
	
	
	private Image dbImage;
	private Graphics dbg;
	
	public void init(){
		setBackground(Color.black);
		setSize(600,600);
		
		
		//EventHandling eve = new EventHandling(this);
		MouseEventAdapter mea = new MouseEventAdapter();
		mouseMotionEventAdapter mmea = new mouseMotionEventAdapter();
		addMouseListener(mea);
		addMouseMotionListener(mmea);
	}
	
	public void start(){
		t = new Thread(this);
		t.start();
	}
	
	/////////////////////////////////////////////////////////////------------------------------------------////////////////////////////////////////////////////////////////
	public void paint(Graphics g){
		
		g.setColor(Color.YELLOW);
		g.drawOval(500, y, 50, 50);
		g.drawLine(50,250,50,350);
		g.drawLine(xArrow, yArrow, xArrow+70, yArrow );
		//g.drawArc(60, y, 100, 100, 300, 60);
		
	}

	@Override
	public void run() {
		// TODO Auto-generated method stub
		
		while(flag)
		{
			repaint();
			
			if(flagChange )
				changeBall();
			
			if(arrowFlagChange)
				changeArrow();
			
			try{
				t.sleep(SLEEP_TIME);
			}catch(Exception e){
				System.out.println("PROBLEM");
			}
		}
		
	}
	
	private void changeArrow()
	{
		xArrow++;
		
		if(xArrow >= 600)
		{
			xArrow = -70;
			arrowFlagChange = false;
		}
	}

	private void changeBall() {
		// TODO Auto-generated method stub
		y++;
		
		if(y>=600)
			y=-50;
		
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
	
	
	public class MouseEventAdapter extends MouseAdapter
	{
		public void mouseClicked(MouseEvent me)
		{
			showStatus(":MOUSE IS CLICKED");
			flagChange = arrowFlagChange = true;
		}
		public void mouseEntered(MouseEvent me)
		{
			showStatus("ENTERED ENTERED");
		}
		public void mouseReleased(MouseEvent me)
		{
			showStatus("its realesed?");
		}
	}
	
	
	public class mouseMotionEventAdapter implements MouseMotionListener
	{

		@Override
		public void mouseDragged(MouseEvent me) {
			// TODO Auto-generated method stub
			
		}

		@Override
		public void mouseMoved(MouseEvent me) {
			// TODO Auto-generated method stub
			yArrow = me.getY();
			showStatus("x:"+me.getX() +"y:"+ me.getY());
		}
		
	}
	

}
