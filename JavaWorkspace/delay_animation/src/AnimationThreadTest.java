import javax.swing.JFrame;


public class AnimationThreadTest extends JFrame {
	
	public static void main( String args[])
	{
		AnimationThreadTest JF = new AnimationThreadTest();
		AnimationThreadVertical JP = new AnimationThreadVertical();
		
		JF.setDefaultCloseOperation(JF.EXIT_ON_CLOSE);
		JF.setSize(500, 700);
		JF.setVisible(true);
		
		JF.add(JP);
	}

}
