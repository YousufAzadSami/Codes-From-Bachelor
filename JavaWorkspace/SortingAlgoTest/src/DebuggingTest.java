import java.lang.reflect.InvocationTargetException;

import javax.swing.JApplet;
import javax.swing.SwingUtilities;


public class DebuggingTest extends JApplet implements Runnable{

	//public static void main( String args[]){
	public void init(){
		
		int i=0,j=0;
		int a[][] = new int[5][5];
		
		System.out.println("why o why?");
		
		new Thread(new DebuggingTest(), "wow").start();
		
		array(a,i,j);
		
		showArray(a, i, j);
		
		System.out.println("finished ...");
	}
	
	
	void array(int a[][], int first, int last ){
		
		for(first=0;first<5;first++){
			for(last=first;last<5;last++){
				a[first][last] = first+last;
			}
		}
		
	}
	
	public void showArray(int a[][], int first, int last ){
		
		for(first=0;first<5;first++){
			for(last=first;last<5;last++){
				run();
				System.out.printf("%2d  ", a[first][last]);
			}
			System.out.println();
		}
	}
	
	public void run(){
		
		try {
			Thread.sleep(5000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
	
	
}
