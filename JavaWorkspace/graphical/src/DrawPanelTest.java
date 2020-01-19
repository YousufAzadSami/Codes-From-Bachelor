import javax.swing.JFrame;


public class DrawPanelTest {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		DrawPanel panel = new DrawPanel();
		JFrame app = new JFrame();
		
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE );
		
		app.add(panel);
		app.setSize(250, 250);
		app.setVisible(true);
	}

}
