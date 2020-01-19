import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.FlowLayout;
import javax.swing.Icon;
import javax.swing.ImageIcon;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JOptionPane;

public class Button extends JFrame {

	private JButton b1;
	private JButton b2;
	private JButton b3;
	
	public Button()
	{
		super("our F ing button test >_< ");
		setLayout( new FlowLayout() );
		
		b1 = new JButton("SHIT");
		add(b1);
		
		Icon deiNormal = new ImageIcon( getClass().getResource("bug1.png") );
		Icon deiYellow = new ImageIcon( getClass().getResource("bug1.gif") );
		b2 = new JButton( "FANCY" , deiNormal);
		b2.setRolloverIcon(deiYellow);
		add(b2);
		
		ButtonHandler handleIt = new ButtonHandler();
		b1.addActionListener(handleIt);
		b2.addActionListener(handleIt);
		
	}
	
	private class ButtonHandler implements ActionListener
	{
		public void actionPerformed( ActionEvent e)
		{
			JOptionPane.showMessageDialog(Button.this , "u pressed"+e.getActionCommand());
			System.out.println(e.getActionCommand());
		}
	}
	
}




