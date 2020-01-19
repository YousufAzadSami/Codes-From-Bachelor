import javax.swing.JButton;
import javax.swing.JFrame;


public class ThreadInJFrame {

	private static JButton jb;
	private static JFrame jf;
	
	public static void main(String args[]){
		System.out.println("in main:" + Thread.currentThread());
		
		System.out.println("b4 jf:" + Thread.currentThread());
		jf = new JFrame();
		jf.setVisible(true);
		jf.setSize(233, 533);
		System.out.println("aftr jf:" + Thread.currentThread());
		
		jb = new JButton("what");
		jb.setSize(20, 20);
		jf.add(jb);
	}
}
