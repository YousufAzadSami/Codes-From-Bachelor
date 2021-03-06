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
 
public class SequentialSearchSwingTimer extends JApplet implements ActionListener {
 
        private Integer I;
 
        private String z;
        private ArrayList<String> arr = new ArrayList<String>();
 
        private Border border;
        private JPanel jPanelHeader, jPanelMiddle, jPanelArray, jPanelFooter;
        private JTextField jTextFieldArr, jTextFieldZ;
        private JButton jButtonStart, jButtonNext, jButtonClear , jButtonAuto;
        private JLabel jLabelGridArr[];
        
        public Timer timer;

		private boolean flagForAuto = false;

		private int len;

		private int counter;
 
        public void init() {
                setLayout(new BorderLayout());
                jPanelHeader = new JPanel(new FlowLayout(FlowLayout.LEFT));
                jPanelHeader.setBackground(Color.YELLOW);
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
                
                jButtonAuto = new JButton("Auto");
                jButtonAuto.setEnabled(false);
                jButtonAuto.addActionListener(this);
                jPanelHeader.add(jButtonAuto);
                
                jButtonClear = new JButton("Clear");
                jButtonClear.addActionListener(this);
                jPanelHeader.add(jButtonClear);
                add(jPanelHeader, BorderLayout.NORTH);
 
                jPanelMiddle = new JPanel(new BorderLayout());
                jPanelArray = new JPanel();
                jPanelMiddle.add(jPanelArray, BorderLayout.CENTER);
                add(jPanelMiddle, BorderLayout.CENTER);
 
                jPanelFooter = new JPanel(new FlowLayout(FlowLayout.RIGHT));
                jPanelFooter.add(new JLabel(
                                "Developed By :: Md. Fasihul Kabir (ID :: 09.01.04.065"));
                add(jPanelFooter, BorderLayout.SOUTH);
                setSize(950, 125);
 
                border = BorderFactory.createLineBorder(Color.BLACK);
                RandomGenerator();
                
                timer = new Timer(500, this);
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
                StringTokenizer st = new StringTokenizer(jTextFieldArr.getText(), ",");
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
                len = arr.size();
                jButtonStart.setEnabled(false);
                jButtonNext.setEnabled(true);
                jButtonAuto.setEnabled(true);
                refresh();
        }
 
        private void refresh() {
                setSize(1950, 500);
                setSize(950, 125);
        }
        
        private void iterationArray() {
        	
        	int i, len=arr.size();
        	
        	for(i=0; i<len; i++)
        	{
        		Search();
        	}
        	
        }
 
        private void Search() {
                if (I >= 0)
                        jLabelGridArr[I].setBackground(Color.CYAN);
                I++;
                
                if (I < arr.size()) {
                        if (jLabelGridArr[I].getText().equals(z)) {
                                jLabelGridArr[I].setBackground(Color.RED);
                                jButtonNext.setEnabled(false);
                                ShowMessage("Found!");
                                
                                flagForAuto = false;
                                
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
 
        @Override
        public void actionPerformed(ActionEvent ae) {
                
        	if (ae.getSource() == jButtonStart) {
        		Init();
            } else if (ae.getSource() == jButtonNext) {
            	Search();
            } else if (ae.getSource() == jButtonAuto) {
            	
            	flagForAuto  = true;
            	timer.start();
            	jButtonStart.setEnabled(false);
            	jButtonNext.setEnabled(false);
            	counter=0;
            	Search();
            	
            	//iterationArray();
            	
            	//timer.stop();           	
            	
            } else if (ae.getSource() == jButtonClear) {
                jButtonStart.setEnabled(true);
                jButtonNext.setEnabled(false);
                jPanelArray.removeAll();
                refresh();
                RandomGenerator();
            }
        	
        	if(flagForAuto == true)
        	{	
            	
            	if(counter<len)
            	{
            		Search();
            		counter++;
            	}
            	timer.stop();            	
        	}
        	
        }
}