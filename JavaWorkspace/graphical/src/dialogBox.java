import javax.swing.JOptionPane; 


public class dialogBox {
	
	public static void main( String args[])
	{
		String one, two;
		
		one = JOptionPane.showInputDialog("Please enter ur first number:");
		two = JOptionPane.showInputDialog("Please enter ur second number:");
		
		int firstNumber, secondNumber;
		
		firstNumber = Integer.parseInt(one);
		secondNumber = Integer.parseInt(two);
		
		int result = firstNumber + secondNumber; 
		
		JOptionPane.showMessageDialog(null , "ur desired result is :" + result );
	}

}
