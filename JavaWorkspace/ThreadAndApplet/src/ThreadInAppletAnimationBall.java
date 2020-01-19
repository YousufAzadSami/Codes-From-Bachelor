import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;


public class ThreadInAppletAnimationBall extends JApplet implements Runnable{
	
	Thread t=null;
	JPanel jp;
	JButton jb;
	private int x;
	
	public void init(){
		//jp = new JPanel();
		//jp.setBackground(Color.cyan);
		//add(jp);
		
		jb = new JButton("boton");
		add(jb);
		//jb.setLocation(10, 10);
		
		jb.addActionListener(new forButton());
		System.out.println("init: " + Thread.currentThread());
		t = Thread.currentThread();
		//t.start();
		
		
	}
	public void start(){
		System.out.println("start: " + Thread.currentThread());
		anotherMethod();
	}
	private void anotherMethod() {
		System.out.println("anotherMethod: " + Thread.currentThread());
	}
	public void paint(Graphics g){
		super.paint(g);
		
		System.out.println("paint: " + Thread.currentThread());
		g.drawOval(x, 20, 30, 30);
		//anotherMethod();
		
		jp.setBackground(Color.white);
		jb.setBackground(Color.pink);
		
		
	}
	public void stop(){
		System.out.println("stop: " + Thread.currentThread());
	}
	public void destroy(){
		System.out.println("destroy: " + Thread.currentThread());
	}
	@Override
	public void run() {
		// TODO Auto-generated method stub
		System.out.println("run: " + Thread.currentThread());
		while(true){
			x++;
			
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
	public class forButton implements ActionListener{

		@Override
		public void actionPerformed(ActionEvent e) {
			if(e.getSource() == jb)
			{
				jb.setBackground(Color.black);
				//jb.setFont(Font.SANS_SERIF);
				System.out.println("ActionPerformed: " + Thread.currentThread());
				
			}
		}
	
	}

}
