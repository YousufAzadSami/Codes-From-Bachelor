import javax.swing.JFrame;


public class JFrameSwing {
	
	public static void main(String args[])
	{
		
		System.out.println("b4 JFrames: "+ Thread.currentThread());
		
		JFrame jf = new JFrame("Wut");
		JPanelSwing jps = new JPanelSwing();
		
		jf.setVisible(true);
		jf.setSize(200, 400);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		jf.add(jps);
		
		System.out.println("aftr buttons: "+ Thread.currentThread());
	}

}
