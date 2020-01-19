import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.Timer;


public class JFrameAndJPanel implements ActionListener{
	
	static Timer timer;
	static JPanel p1 = new JPanel();
	static JFrame f = new JFrame("testing ..testing ...");
	
	public JFrameAndJPanel(){
		timer = new Timer(2000, this);
	}
	
	public static void main(String args[])
	{
		
		f.setSize(300, 600);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setVisible(true);
		
		
		/*
		JPanel p2 = new JPanel();
		f.add(p2);
		
		p2.add(jl11);
		*/
		
		JLabel jl11 = new JLabel("no, i dont belong to 1");
		
		
		f.add(p1);
		JLabel jl1 = new JLabel("yes i belong to 1");
		p1.add(jl1);
		
		
		timer.start();
		
		p1.add(jl11);
	}
	
	public void actionPerformed( ActionEvent e)
	{
		JButton jb1 = new JButton("actionPer");
		p1.add(jb1);
	}
}
