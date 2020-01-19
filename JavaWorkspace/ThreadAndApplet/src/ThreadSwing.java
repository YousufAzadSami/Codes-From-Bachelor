
/* 
Threads are needed when you want to perfom actions over and over again. 
We want to show the current time and update that every second. 
*/ 
 
import java.awt.*; 
import java.applet.*; 
// We need Date to get the current time. 
import java.util.Date;

import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JPanel;

// Implement Runnable, this will make it possible for threads 
// to call the run method when activated. 
    public class ThreadSwing extends JApplet implements Runnable 
    { 
    		JPanel JP = new JPanel();
         // Define your thread. 
         Thread clockThread; 
         // This textfield will show the time. 
         TextField clockField; 
         // Date will give us the current hours, minutes and seconds 
         Date date; 
         // This variable will remain true for as long 
         // we want the thread to run. 
         boolean running = true;

         public void init() 
         { 
              // a standard layout to place just one textfield 
              setLayout(new BorderLayout()); 
               clockField = new TextField(); 
              JP.add(clockField,"Center"); 
              // Create the thread. 
              System.out.println("b4 initialization, current: " + Thread.currentThread());
              clockThread= new Thread(this);
              //clockThread = Thread.currentThread();							//somehow this doesnt work. WHAT THE HELL IS GOING ON!
              System.out.println("af initialization, current: " + Thread.currentThread());
              System.out.println("af, clockThread: " + clockThread);
              
              // and let it start running 
              clockThread.start(); 
         }

         // Very important. You do not want your thread to keep running when 
         // the applet is deactivated (eg. user left page) 
         public void destroy() 
         { 
              // will cause thread to stop looping 
              running = false; 
              // destroy it. 
              clockThread = null; 
         } 
 

     // The method that will be called when you have a thread. 
     // You always need this when you implement Runnable (use a thread) 
     public void run() 
     { 
    	 
    	 System.out.println("run, clockThread: " + clockThread);
         
          // loop until told to stop 
          while (running) 
          { 
        	  
               // Construct the current date. 
               date = new Date(); 
               // Get the hours, minutes and hours 
               String time = date.getHours()+":"+date.getMinutes()+":"+date.getSeconds(); 
               // Put that result in the textfield 
               clockField.setText(time);
               
               
               //Now the reason for threads 
               try 
               { 
                     // Wait 500milliseconds before continuing 
                    clockThread.sleep(500); 
               } 
               catch (InterruptedException e) 
               { 
                    System.out.println(e); 
               } 
               // he has wait and will now restart his actions. 
               JButton jb = new JButton("new");
               add(jb);
               clockField.setText("wut");
               
          } 
     } 
} 

/* 
Be cautious when using threads, make sure to end them sometime and not to let them run too 
fast. When threads are used to time on-screen drawing things could slow down 
heavily. 
*/