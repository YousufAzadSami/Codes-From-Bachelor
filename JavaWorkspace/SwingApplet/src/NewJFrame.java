import java.util.logging.Level;
import java.util.logging.Logger;

/*
* To change this template, choose Tools | Templates
* and open the template in the editor.
*/

/*
* NewJFrame.java
*
* Created on Sep 27, 2012, 1:36:33 AM
*/

/**
*
* @author NIPUN
*/
public class NewJFrame extends javax.swing.JFrame {

/** Creates new form NewJFrame */
public NewJFrame() {
initComponents();
}

/** This method is called from within the constructor to
* initialize the form.
* WARNING: Do NOT modify this code. The content of this method is
* always regenerated by the Form Editor.
*/
@SuppressWarnings("unchecked")
// <editor-fold defaultstate="collapsed" desc="Generated Code"> 
private void initComponents() {

jLabel1 = new javax.swing.JLabel();

setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

jLabel1.setIcon(new javax.swing.ImageIcon("C:\\Users\\NIPUN\\Documents\\544786_4056500376742_1245361021_n.jpg")); // NOI18N

javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
getContentPane().setLayout(layout);
layout.setHorizontalGroup(
layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
.addGroup(layout.createSequentialGroup()
.addGap(152, 152, 152)
.addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 191, javax.swing.GroupLayout.PREFERRED_SIZE)
.addContainerGap(57, Short.MAX_VALUE))
);
layout.setVerticalGroup(
layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
.addGroup(layout.createSequentialGroup()
.addGap(92, 92, 92)
.addComponent(jLabel1)
.addContainerGap(28, Short.MAX_VALUE))
);

pack();
}// </editor-fold> 

/**
* @param args the command line arguments
*/
public static void main(String args[]) {
java.awt.EventQueue.invokeLater(new Runnable() {
public void run() {
new NewJFrame().setVisible(true);
}
});
}

// Variables declaration - do not modify 
private javax.swing.JLabel jLabel1;
// End of variables declaration 
class Newthread implements Runnable{
Newthread(){
new Thread(this).start();
}
public void run(){
for(int i=1;i<10;i++){
try {
jLabel1.setVisible(false);
Thread.sleep(500);
jLabel1.setVisible(true);
Thread.sleep(500);
} catch (InterruptedException ex) {
Logger.getLogger(NewJFrame.class.getName()).log(Level.SEVERE, null, ex);
}
}
}
}
private Newthread n= new Newthread();
}