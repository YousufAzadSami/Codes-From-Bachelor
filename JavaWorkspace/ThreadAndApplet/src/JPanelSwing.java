import java.awt.BorderLayout;

import javax.swing.JButton;
import javax.swing.JPanel;


public class JPanelSwing extends JPanel implements Runnable{
	
	private JButton jb2;
	private JButton jb1;
	private Thread t;

	public JPanelSwing(){
		System.out.println("b4 buttons: "+ Thread.currentThread());
		setLayout(new BorderLayout());
		jb1 = new JButton("111");
		jb2 = new JButton("222");
		
		
		System.out.println("inside constructor");
		
		add(jb1, BorderLayout.EAST);
		add(jb2, BorderLayout.WEST);
		
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
	
	
}
