import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.StringTokenizer;

import javax.swing.BorderFactory;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.border.Border;


public class BubbleSortClean extends JApplet implements ActionListener {
	
	 private Border border;
     private JPanel jPanelHeader, jPanelMiddle, jPanelArray, jPanelFooter;
     private JTextField jTextFieldArr, jTextFieldZ;
     private JButton jButtonStart, jButtonAutoplay, jButtonClear;
     private JLabel jLabelGridArr[];
     
     private ArrayList<String> arr = new ArrayList<String>();
     private String z, temp;
     
     private int i,j,len;
	
     public void init() {
    	 
	     setLayout(new BorderLayout());
	     jPanelHeader = new JPanel(new FlowLayout(FlowLayout.LEFT));
	     jPanelHeader.setBackground(Color.yellow);
	     jPanelHeader.add(new JLabel("Array"));
	     jTextFieldArr = new JTextField(25);
	     jPanelHeader.add(jTextFieldArr);
	     jPanelHeader.add(new JLabel("Search"));
	     jTextFieldZ = new JTextField(25);
	     jPanelHeader.add(jTextFieldZ);
	     jButtonStart = new JButton("Start");
	     jButtonStart.addActionListener(this);
	     jPanelHeader.add(jButtonStart);
	     jButtonAutoplay = new JButton("Autoplay");
	     jButtonAutoplay.setEnabled(false);
	     jButtonAutoplay.addActionListener(this);
	     jPanelHeader.add(jButtonAutoplay);
	     jButtonClear = new JButton("Clear");
	     jButtonClear.addActionListener(this);
	     jPanelHeader.add(jButtonClear);
	     add(jPanelHeader, BorderLayout.NORTH);
	
	     jPanelMiddle = new JPanel(new BorderLayout());
	     jPanelArray = new JPanel();
	     jPanelMiddle.add(jPanelArray, BorderLayout.CENTER);
	     add(jPanelMiddle, BorderLayout.CENTER);
	     jPanelArray.setBackground(Color.black);
	
	     jPanelFooter = new JPanel(new FlowLayout(FlowLayout.RIGHT));
	     jPanelFooter.add(new JLabel(
	                     "Developed By :: Md. Fasihul Kabir (ID :: 09.01.04.065"));
	     add(jPanelFooter, BorderLayout.SOUTH);
	     setSize(950, 125);
	
	     border = BorderFactory.createLineBorder(Color.black);
	     RandomGenerator();
     }
     
     private void RandomGenerator() {
         
    	 String t;
         String r = (new Integer((int) (Math.random() * 100))).toString();
         int cnt = 1;
         
         while (cnt <= 10) {
                 t = (new Integer((int) (Math.random() * 100))).toString();
                 ;
                 r += ", " + t;
                 cnt++;
                 if (cnt == 6)
                         jTextFieldZ.setText(t);
         }
         jTextFieldArr.setText(r);
     }
     
     private void Init() {
    	 
         String temp;
         
         
         ///////////////////////////////////////////////////////
         // FOR SEPARETING THE NUMBERS FROM COMMAS
         StringTokenizer st = new StringTokenizer(jTextFieldArr.getText(), ",");
         
        
         
         arr.clear();
         
         while (st.hasMoreTokens()) {         
        	 	temp = st.nextToken().trim();
                
        	 	if (temp.length() > 0) {
                         arr.add(temp);
                }
         }
         ///////////////////////////////////////////////////////
         
         if (arr.size() == 0) {
                 ShowMessage("Please Insert An Array To Search");
                 return;
         } else if (arr.size() > 25) {
                 ShowMessage("Array Cannot Be Greater Than 25");
                 return;
         }
         
         z = jTextFieldZ.getText().trim();
         
         if (z.trim().equals("")) {
                 ShowMessage("Please Insert A Searching Value");
                 return;
         }
         
         jLabelGridArr = new JLabel[arr.size()];
         jPanelArray.setLayout(new GridLayout(1, arr.size()));
         
         for (int i = 0; i < arr.size(); i++) {
                 jLabelGridArr[i] = new JLabel(arr.get(i));
                 jLabelGridArr[i].setBorder(border);
                 jLabelGridArr[i].setBackground(Color.LIGHT_GRAY);
                 jLabelGridArr[i].setFont(new Font("Serif", Font.PLAIN, 24));
                 jLabelGridArr[i].setHorizontalAlignment(JLabel.CENTER);
                 jLabelGridArr[i].setVerticalAlignment(JLabel.CENTER);
                 jLabelGridArr[i].setOpaque(true);
                 jPanelArray.add(jLabelGridArr[i]);
         }
         i = 0;
         j = 0;
         
         len = arr.size() - 1;
         
         jButtonStart.setEnabled(false);
         jButtonAutoplay.setEnabled(true);
         refresh();
     }
     
     private void bubbleSort() {
    	 
    	 try {
			Thread.sleep(10000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
    	 
    	 if(j!=0)
    	 {
    		 jLabelGridArr[j-1]. setBackground(Color.lightGray);
    	 }
    	 if(i == len)
    	 {
    		 jLabelGridArr[0].setBackground(Color.RED);
    		 jButtonAutoplay.setEnabled(false);
    	 }    	 
    	
		 if( (j<len-i) )
		 {
			 jLabelGridArr[j].setBackground(Color.RED);
	    	 jLabelGridArr[j+1].setBackground(Color.pink);
		 }
    	 
    	 
    	 if( i<len )
    	 {
    		 if( j<len - i )
    		 {			 
       			 if( Integer.parseInt(jLabelGridArr[j].getText()) > Integer.parseInt(jLabelGridArr[j+1].getText()) )
    			 {
    				 // SWAP
    				 swap();
    				 
    				 jLabelGridArr[j].setBackground(Color.PINK);
    		    	 jLabelGridArr[j+1].setBackground(Color.RED);
    				 
    			 }
    		 }else{  			 
    			    			 
    			 jLabelGridArr[j].setBackground(Color.red);
    			 
    			 j= -1;
    			 i++;   	 
    			
    		 }
    		 j++;
    	 }
    	 
 	}
     
     
    private void swap(){
    	
    	temp = jLabelGridArr[j+1].getText();
    	jLabelGridArr[j+1].setText(jLabelGridArr[j].getText())  ;
    	jLabelGridArr[j].setText(temp) ;
    	  	
    	
    } 
     
     ///////////////////////////////////////////////////////////////
     private void ShowMessage(String message) {
         JOptionPane.showMessageDialog(null, message);
     }
     
     private void refresh() {
         setSize(1950, 500);
         setSize(950, 125);
     }
     ///////////////////////////////////////////////////////////////

	@Override
	public void actionPerformed(ActionEvent ae) {
		
		if(ae.getSource() == jButtonStart){
			Init();
			
		}if(ae.getSource() == jButtonAutoplay){
			System.out.println("pause");
			bubbleSort();
		}else if (ae.getSource() == jButtonClear) {
            jButtonStart.setEnabled(true);
            jButtonAutoplay.setEnabled(false);
            jPanelArray.removeAll();
            refresh();
            RandomGenerator();
		}
		
	}

	

}
