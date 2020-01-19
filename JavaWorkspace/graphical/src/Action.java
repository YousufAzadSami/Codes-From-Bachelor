import javax.swing.JTextField;
import javax.swing.JPasswordField;
import java.awt.FlowLayout;
import javax.swing.JFrame;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JOptionPane;


public class Action extends JFrame{
	
	private JTextField field1;
	private JTextField field2;
	private JPasswordField pass;
	
	public Action()
	{
		super("fucking title this is..");
		setLayout( new FlowLayout() );
		
		
		field1 = new JTextField("first text field",10);
		add( field1 );
		
		field2 = new JTextField(20);
		add( field2 );
		
		pass = new JPasswordField(15);
		add(pass);
		
		TextHandler handleThis = new TextHandler();
		
		field1.addActionListener( handleThis);
		field2.addActionListener( handleThis);
		pass.addActionListener( handleThis);
		
		
	}
	
	private class TextHandler implements ActionListener
	{
		public void actionPerformed( ActionEvent event )
		{
			String s= "";
			
			if( event.getSource() == field1 )
				s = String.format("field 1 represents %s" , event.getActionCommand() );
			
			else if( event.getSource() ==  field2)
				s = String.format("field 2 represents %s" , event.getActionCommand() );
			else if( event.getSource() == pass)
				s = String.format("password is %s" , event.getActionCommand() );
			
			JOptionPane.showMessageDialog( null , s );
		}
		
	}

}
