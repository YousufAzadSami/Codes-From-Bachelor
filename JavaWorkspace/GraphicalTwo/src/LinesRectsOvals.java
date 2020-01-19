import javax.swing.JFrame;


public class LinesRectsOvals {
	
	public static void main( String args[])
	{
		JFrame frame = new JFrame("Drawing fucking shapes:");
		LinesRectOvalsJPanel ob = new LinesRectOvalsJPanel();
		
		frame.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE);
		frame.setSize(400 , 210);
		frame.setVisible(true);
		
		frame.add(ob);
	}

}
