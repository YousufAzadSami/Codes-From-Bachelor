import javax.swing.JFrame;


public class ButtonTest {

	public static void main( String args[])
	{
		Button buttonOb = new Button();
		buttonOb.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		buttonOb.setSize(300,200);
		buttonOb.setVisible(true);
		
		Button buttonOb2 = new Button();
		buttonOb2.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		buttonOb2.setSize(200,100);
		buttonOb2.setVisible(true);
		
	}
}
