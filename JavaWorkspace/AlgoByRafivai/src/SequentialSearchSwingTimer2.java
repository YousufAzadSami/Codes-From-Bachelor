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
import javax.swing.Timer;
import javax.swing.border.Border;
 
public class SequentialSearchSwingTimer2 extends JApplet {
 
        //private Integer I;
		private int I;
 
        private String z;
        private ArrayList<String> arr = new ArrayList<String>();
 
        private Border border;
        private JPanel jPanelHeader, jPanelMiddle, jPanelArray, jPanelFooter;
        private JTextField jTextFieldArr, jTextFieldZ;
        private JButton jButtonStart, jButtonNext, jButtonClear, jButtonAuto;
        private JLabel jLabelGridArr[];
        
        Timer timer;
        
      
 
        public void init() {
        		
        		ActionPerformedForButtons forButtons= new ActionPerformedForButtons();
        		ActionPerformedForTimer forTimer = new ActionPerformedForTimer();
        		
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
                jButtonStart.addActionListener(forButtons);
                jPanelHeader.add(jButtonStart);
                jButtonNext = new JButton("Next");
                jButtonNext.setEnabled(false);
                jButtonNext.addActionListener(forButtons);
                jPanelHeader.add(jButtonNext);
                ///////////////////////////////////////////////
                jButtonAuto = new JButton("auto");
                jButtonAuto.setEnabled(false);
                jButtonAuto.addActionListener(forTimer);
                jPanelHeader.add(jButtonAuto);
                //////////////////////////////////////////////
                jButtonClear = new JButton("Clear");
                jButtonClear.addActionListener(forButtons);
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
                
                
                timer = new Timer( 5500, forTimer );
                System.out.println("init: " + Thread.currentThread());
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
                System.out.println("randomgenaretor: " + Thread.currentThread());
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
                jButtonAuto.setEnabled(true);
                refresh();
                System.out.println("INIT: " + Thread.currentThread());
        }
 
        private void refresh() {
                setSize(1950, 500);
                setSize(950, 125);
        }
 
        private void Search() {
        	
        	System.out.println("serch: " + Thread.currentThread());
                if (I >= 0)
                        jLabelGridArr[I].setBackground(Color.CYAN);
                I++;
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
 
        private void ShowMessage(String message) {
                JOptionPane.showMessageDialog(null, message);
        }
 
        
        public class ActionPerformedForButtons implements ActionListener {
        	
        	@Override
            public void actionPerformed(ActionEvent ae) {
                    if (ae.getSource() == jButtonStart) {
                            Init();
                    } else if (ae.getSource() == jButtonNext) {
                    		System.out.println("JButtonNext:b4:serch: " + Thread.currentThread());
                            Search();
                            System.out.println("JButtonNext:af:serch: " + Thread.currentThread());
                    } else if (ae.getSource() == jButtonClear) {
                            jButtonStart.setEnabled(true);
                            jButtonNext.setEnabled(false);
                            jPanelArray.removeAll();
                            refresh();
                            RandomGenerator();
                    }
            }
        	
        } 
        public class ActionPerformedForTimer implements ActionListener{

			private int i;
			

			@Override
			public void actionPerformed(ActionEvent e) {
				
				
				
				if(e.getSource() == jButtonAuto){
						System.out.println("bb  current thread:: " + Thread.currentThread());
						timer.start();
						System.out.println("aa  current thread:: " + Thread.currentThread());
					 JOptionPane.showMessageDialog(null, "auto has been pressed"+i++);
				}
				
			}
        	
        }
}