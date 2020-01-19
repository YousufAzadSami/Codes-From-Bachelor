import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.StringTokenizer;
 
import javax.swing.BorderFactory;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;
import javax.swing.border.Border;
 
public class SequentialSearch extends JApplet implements ActionListener, Runnable {
 
        //private Integer I;
		private int I;
 
        private String z;
        private ArrayList<String> arr = new ArrayList<String>();
 
        private Border border;
        private JPanel jPanelHeader, jPanelMiddle, jPanelArray, jPanelFooter;
        private JTextField jTextFieldArr, jTextFieldZ;
        private JButton jButtonStart, jButtonNext, jButtonClear;
        private JLabel jLabelGridArr[];

		private Thread t;
 
        public void init() {
                setLayout(new BorderLayout());
                jPanelHeader = new JPanel(new FlowLayout(FlowLayout.LEFT));
                jPanelHeader.setBackground(Color.red);
                jPanelHeader.add(new JLabel("Array"));
                jTextFieldArr = new JTextField(25);
                jPanelHeader.add(jTextFieldArr);
                jPanelHeader.add(new JLabel("Search"));
                jTextFieldZ = new JTextField(25);
                jPanelHeader.add(jTextFieldZ);
                jButtonStart = new JButton("Start");
                jButtonStart.addActionListener(this);
                jPanelHeader.add(jButtonStart);
                jButtonNext = new JButton("Next");
                jButtonNext.setEnabled(false);
                jButtonNext.addActionListener(this);
                jPanelHeader.add(jButtonNext);
                jButtonClear = new JButton("Clear");
                jButtonClear.addActionListener(this);
                jPanelHeader.add(jButtonClear);
                add(jPanelHeader, BorderLayout.NORTH);
 
                jPanelMiddle = new JPanel(new BorderLayout());
                jPanelArray = new JPanel();
                jPanelMiddle.add(jPanelArray, BorderLayout.CENTER);
                add(jPanelMiddle, BorderLayout.CENTER);
                jPanelArray.setBackground(Color.GREEN);
 
                jPanelFooter = new JPanel(new FlowLayout(FlowLayout.RIGHT));
                jPanelFooter.add(new JLabel(
                                "Developed By :: Md. Fasihul Kabir (ID :: 09.01.04.065"));
                add(jPanelFooter, BorderLayout.SOUTH);
                setSize(950, 125);
 
                border = BorderFactory.createLineBorder(Color.CYAN);
                RandomGenerator();
        }
 
        private void RandomGenerator() {
                String t;
                String r = (new Integer((int) (Math.random() * 100))).toString();
                int cnt = 1;
                while (cnt <= 10) {
                        t = (new Integer((int) (Math.random() * 100))).toString();
                        
                        r += ", " + t;
                        cnt++;
                        if (cnt == 6)
                                jTextFieldZ.setText(t);
                }
                jTextFieldArr.setText(r);
        }
 
        private void Init() {
                String temp;
                StringTokenizer st = new StringTokenizer(jTextFieldArr.getText(), ",");
                
                System.out.println(st);
                
                arr.clear();
                while (st.hasMoreTokens()) {
                        temp = st.nextToken().trim();
                        if (temp.length() > 0) {
                                arr.add(temp);
                        }
                }
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
                I = -1;
                jButtonStart.setEnabled(false);
                jButtonNext.setEnabled(true);
                refresh();
        }
 
        private void refresh() {
                setSize(1950, 500);
                setSize(950, 125);
        }
 
        private void Search() {
        		System.out.println("edt: " + SwingUtilities.isEventDispatchThread());
                if (I >= 0)
                        jLabelGridArr[I].setBackground(Color.CYAN);
                I++;
                
                try {
					Thread.sleep(10000);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
                
                if (I < arr.size()) {
                        if (jLabelGridArr[I].getText().equals(z)) {
                                jLabelGridArr[I].setBackground(Color.RED);
                                jButtonNext.setEnabled(false);
                                ShowMessage("Found!");
                        } else {
                                jLabelGridArr[I].setBackground(Color.GREEN);
                                jLabelGridArr[I].setOpaque(true);
                        }
                } else {
                        jButtonNext.setEnabled(false);
                        ShowMessage("Not Found!");
                }
        }
        
        private void searchAuto(){
        	
        	System.out.println("edt: " + SwingUtilities.isEventDispatchThread());
        	
        	if( I >= 0)
        		jLabelGridArr[I].setBackground(Color.yellow);
        	I++;
        	
        	
        	while(I<arr.size()){
        		if(jLabelGridArr[I].getText().equals(z)){
        			jLabelGridArr[I].setBackground(Color.red);
        			jButtonNext.setEnabled(false);
        			ShowMessage("Found");
        		}
        		else{
        			jLabelGridArr[I].setBackground(Color.YELLOW);
        			jLabelGridArr[I].setOpaque(true);
        		}
        		I++;
        		
        		try {
    				Thread.sleep(1000);
    			} catch (InterruptedException e) {
    				// TODO Auto-generated catch block
    				e.printStackTrace();
    			}
        		
        	}
        	
        }
        
        private void quickSort(int first, int last) {
    		int pivot, pivotIndex, i, j;
    		String temp;
    		
    		if( (last-first) <=1)
    			return;
    		
    		
    		i=first;
    		j=last;
    		pivotIndex = (first+last)/2;
    		pivot = Integer.parseInt( jLabelGridArr [pivotIndex].getText() );

    		
    		System.out.printf("old: ");
    		showArray(first, last);
    		System.out.printf("first: %2d, last: %2d, pivot: %2d,i: %2d, j: %2d\n", first, last, pivot, i, j);
    		
    		// coloring
    		jLabelGridArr[i].setBackground(Color.yellow);
    		jLabelGridArr[j].setBackground(Color.green);
    		
    		while(i<j){
    			
    			while( Integer.parseInt( jLabelGridArr [i].getText() ) < pivot){
    				jLabelGridArr[i].setBackground(Color.yellow);
    				
    				try {
						Thread.sleep(1000);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
    				
    				i++;
    			}
    			while( Integer.parseInt( jLabelGridArr [j].getText() ) > pivot){
    				jLabelGridArr[j].setBackground(Color.green);
    				
    				try {
						Thread.sleep(1000);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
    				
    				j--;
    			}
    			
    			temp = ( jLabelGridArr [i].getText() );
    			jLabelGridArr [i].setText(( jLabelGridArr [j].getText() )); 
    			jLabelGridArr [j].setText(temp)  ;
    			
    			jLabelGridArr[j].setBackground(Color.yellow);
        		jLabelGridArr[i].setBackground(Color.green);
        		
        		try {
					Thread.sleep(2000);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
    			
    		}
    		
    		
    		
    		System.out.printf("new: ");
    		showArray(first, last);
    		System.out.printf("first: %2d, last: %2d, pivot: %2d,i: %2d, j: %2d\n", first, last, pivot, i, j);
    		

    		
    		System.out.println();
    		System.out.println();
    		
    		quickSort(first, i-1);
    		quickSort(i+1, last);
    	}
        
        private void showArray(int first, int last){
        	int i;
        	
        	for(i=first ; i<=last;i++){
        		System.out.printf("%2d  ", Integer.parseInt(jLabelGridArr[i].getText() ));
        	}
        	System.out.println();
        }
        
        public void run(){
        	//searchAuto();
        	quickSort(0, arr.size() - 1);
        }
 
        private void ShowMessage(String message) {
                JOptionPane.showMessageDialog(null, message);
        }
 
        @Override
        public void actionPerformed(ActionEvent ae) {
                if (ae.getSource() == jButtonStart) {
                        Init();
                } else if (ae.getSource() == jButtonNext) {
                        //Search();
                		t = new Thread(this);
                		System.out.println("next is pressed");
                		System.out.println("edt: " + SwingUtilities.isEventDispatchThread());
                		// WITH THREAD, ANIMATION WORKS :)
                		t.start();
                		System.out.printf("\n\n\n");
                		showArray(0, arr.size()-1);
                } else if (ae.getSource() == jButtonClear) {
                		showArray(0, arr.size()-1);
                        jButtonStart.setEnabled(true);
                        jButtonNext.setEnabled(false);
                        jPanelArray.removeAll();
                        refresh();
                        RandomGenerator();
                }
        }
}