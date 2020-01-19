import javax.swing.JFrame;
import javax.swing.JCheckBox;
import java.awt.FlowLayout;
import java.awt.Font;
import javax.swing.JTextField;
import java.awt.event.ItemListener;
import java.awt.event.ItemEvent;

public class CheckBox extends JFrame{

	private JCheckBox bold;
	private JCheckBox italy;
	private JTextField text;
	
	public CheckBox()
	{
		super("now u have ur fucking checkBox!");
		setLayout( new FlowLayout() );
		
		text = new JTextField("whats ur font bitch!");
		text.setFont( new Font("Serif" , Font.PLAIN , 20));
		add(text);
		
		
		bold = new JCheckBox("bold");
		add(bold);
		italy = new JCheckBox("Italia");
		add(italy);
		
		
		CheckHandler handleIt = new CheckHandler();
		
		bold.addItemListener( handleIt );
		italy.addItemListener( handleIt );
	}
	
	
	private class CheckHandler implements ItemListener
	{
		public void itemStateChanged( ItemEvent e)
		{
			Font f = null;
			
			if( bold.isSelected() && italy.isSelected())
				f = new Font("Serif" , Font.BOLD + Font.ITALIC , 20);
			else if( bold.isSelected() )
				f = new Font("Serif" , Font.BOLD , 20);
			else if( italy.isSelected() )
				f = new Font( "Serif" , Font.ITALIC , 20);
			else
				f = new Font( "Serif" , Font.PLAIN + Font.CENTER_BASELINE, 28);
			
			text.setFont(f);
		}
	}
}
