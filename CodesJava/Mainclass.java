import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.Timer;

public class Mainclass {
	static Timer timer;

  public static void main(String[] args) {
   timer = new Timer(1000, new MyTimerActionListener());

    timer.start();

/*
    try {
      Thread.sleep(10000);
    } catch (InterruptedException e) {
    	}
    	*/


  }


  public static void readAndWrite(){
	  System.out.println("in");
	}


  static class MyTimerActionListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {

			System.out.println("asdf");

			readAndWrite();
			System.out.println("back");
			timer.stop();
	  	}
	}

}

