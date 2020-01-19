import javax.swing.JFrame;


public class CheckTest {

	public static void main( String args[])
	{
		CheckBox checkOb = new CheckBox();
		
		checkOb.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		checkOb.setSize(200,200);
		checkOb.setVisible( true );
		
		CheckBox checkOb2 = new CheckBox();
		
		checkOb2.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		checkOb2.setSize(400,400);
		checkOb2.setVisible( true );
		
	}
}
