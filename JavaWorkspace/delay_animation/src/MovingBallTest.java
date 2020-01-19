import java.awt.Color;

import javax.swing.JFrame;

public class MovingBallTest {

	public static void main( String args[])
	{
		JFrame j = new JFrame();
		MovingBall mBall = new MovingBall();
		
		j.setSize(1000 , 400);
		j.setBackground(Color.red);
		j.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
		j.add(mBall);
		j.setVisible(true);
		
		
		
		
	}
}
