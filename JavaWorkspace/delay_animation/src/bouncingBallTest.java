import javax.swing.JFrame;


public class bouncingBallTest{
	
	public static void main(String args[])
	{
		bouncingBall bb = new bouncingBall();
		JFrame jf = new JFrame("DAT BALL!!");
		
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setSize(700,400);
		jf.setVisible(true);
		
		
		jf.add(bb);
		
		
		
	}

}
