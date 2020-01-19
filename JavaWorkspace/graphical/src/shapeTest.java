import javax.swing.JFrame;


public class shapeTest 
{
	public static void main( String args[] )
	{
		Shape s = new Shape();
		
		JFrame app = new JFrame();
		
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		app.add(s);
		app.setSize(500, 500);
		app.setVisible(true);
		
	}

}
