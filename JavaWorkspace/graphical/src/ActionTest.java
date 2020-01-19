import javax.swing.JFrame;


public class ActionTest {

	public static void main( String args[])
	{
		Action actionOb = new Action();
		
		actionOb.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		actionOb.setSize( 260, 180);
		actionOb.setVisible(true);
	}
}
