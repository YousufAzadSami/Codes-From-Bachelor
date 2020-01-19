import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;


public class ThreadInJApplet extends JApplet {
	
	//JLabel jl = new JLabel("lubel");
	//JButton jb;
	private JButton jb1;
	private JButton jb2;
	
	public void init(){
		JPanel jp = new JPanel();
		//jp.setLayout(mgr)
		System.out.println("b4 buttons: "+ Thread.currentThread());
		jp.setLayout(new BorderLayout());
		jp.setBackground(Color.red);
		
		jb1 = new JButton("111");
		jb2 = new JButton("222");
		
		
		System.out.println("inside constructor");
		
		jp.add(jb1, BorderLayout.EAST);
		jp.add(jb2, BorderLayout.WEST);
		
		add(jp);
		
		System.out.println("aftr buttons: "+ Thread.currentThread());
		
		//t = new Thread(this);
		//t = Thread.currentThread();
		//t.start();
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
