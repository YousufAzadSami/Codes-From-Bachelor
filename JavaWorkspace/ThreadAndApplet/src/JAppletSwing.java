import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JPanel;


public class JAppletSwing extends JApplet implements Runnable{
	
	private JButton jb2;
	private JButton jb1;
	private Thread t;

	public void init(){
		JPanel jp = new JPanel();
		//jp.setLayout(mgr)
		System.out.println("b4 buttons: "+ Thread.currentThread());
		jp.setLayout(new BorderLayout());
		jp.setBackground(Color.RED);
		
		jb1 = new JButton("111");
		jb2 = new JButton("222");
		
		
		System.out.println("inside constructor");
		
		jp.add(jb1, BorderLayout.EAST);
		jp.add(jb2, BorderLayout.WEST);
		setBackground(Color.red);
		add(jp);
		
		
		System.out.println("aftr buttons: "+ Thread.currentThread());
		
		t = new Thread(this);
		//t = Thread.currentThread();
		t.start();
	}

	@Override
	public void run() {
		System.out.println("in RUN: "+ Thread.currentThread());
		System.out.println();
		
		while(true){
			System.out.println("in while: "+ Thread.currentThread());
			jb1.setVisible(false);
			
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
			
			jb1.setVisible(true);
			
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
			
		}
		
	}
	
	public void start(){
		System.out.println("start: " + Thread.currentThread());
	}
	public void paint(Graphics g){
		//jb1.setText("change");
		
		//jb2.setName("wut");
		System.out.println("paint: " + Thread.currentThread());
	}
	public void stop(){
		System.out.println("stop: " + Thread.currentThread());
	}
	public void destroy(){
		System.out.println("destroy: " + Thread.currentThread());
	}
	
	
	
}
