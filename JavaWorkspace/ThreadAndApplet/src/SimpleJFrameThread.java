import javax.swing.JFrame;
import javax.swing.JPanel;


public class SimpleJFrameThread {

	private static int i;

	public static void main(String args[]){
		JFrame jf = new JFrame("this is a title");
		jf.setVisible(true);
		jf.setSize(300, 500);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		for(i=0;i<5;i++){
			System.out.println("in for: " +Thread.currentThread() + " " +i);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		SimpleJPanelThread jp = new SimpleJPanelThread();
		jf.add(jp);
	}
}


