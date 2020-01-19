import java.util.Random;
import java.util.Scanner;

public class QuickSort {

	static int a[];
	static Random ran ;
	static Scanner sc = new Scanner(System.in);
	private static int i;

	public static void main(String args[]) {

		System.out.println("how many elements?");
		int size = sc.nextInt();

		a = new int[size];
		ran = new Random(size);

		for (i = 0; i < size; i++) {
			a[i] = sc.nextInt();
		}

		for (i = 0; i < size; i++) {
			System.out.printf("%2d ", a[i]);
		}

		System.out.println();

		///quickSort(a);
		
		

	}
	
	public static void quickSort(int size){
		
//		if(size <= 1){
//			return;
//		}
//		
//		int pivot = a[ran.nextInt()];
//		int low = 0;
//		int high = size-1;
		
		
	}

}
