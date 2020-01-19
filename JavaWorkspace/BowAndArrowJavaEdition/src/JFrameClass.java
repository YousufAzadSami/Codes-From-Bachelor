import javax.swing.JFrame;

public class JFrameClass {

	public static void main(String args[]) {
		JFrame jf = new JFrame("bow and arrow madadFakaa!");
		JPanelClass jp = new JPanelClass();

		jf.setTitle("YEAHHHHHHH");
		jf.setSize(800, 600);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setVisible(true);

		jf.add(jp);
	}

}
