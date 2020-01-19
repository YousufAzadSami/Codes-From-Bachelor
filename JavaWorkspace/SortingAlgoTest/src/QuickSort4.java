
public class QuickSort4 {
	
	static int x[] = {24, 5, 3, 35, 14, 23, 49, 43, 2, 98, 28, 37, 81, 90, 16};
	
	private static void showArray(int first, int last) {
		int i;
		
		for(i = first; i<= last; i++){
			System.out.printf("%2d  ", x[i]);
		}
		System.out.println();
	
	}
	
	private static void quickSort(int first, int last) {
		int pivot, pivotIndex, i, j, temp;
		
		if( (last-first) <=1)
			return;
		
		
		i=first;
		j=last;
		pivotIndex = (first+last)/2;
		pivot = x[pivotIndex];

		
		System.out.printf("old: ");
		showArray(first, last);
		System.out.printf("first: %2d, last: %2d, pivot: %2d,i: %2d, j: %2d\n", first, last, pivot, i, j);
		
		while(i<j){
			
			while( x[i] < pivot)
				i++;
			while( x[j] > pivot)
				j--;
			
			temp = x[i];
			x[i] = x[j];
			x[j] = temp;
			
		}
		
		System.out.printf("new: ");
		showArray(first, last);
		System.out.printf("first: %2d, last: %2d, pivot: %2d,i: %2d, j: %2d\n", first, last, pivot, i, j);
		

		
		System.out.println();
		System.out.println();
		
		quickSort(first, i-1);
		quickSort(i+1, last);
	}

	public static void main(String[] args) {
		int size = 15;
		
		System.out.println("inputed array:");
		showArray(0, size-1);
		
		System.out.println("sorting array ...\n\n");
		
		quickSort(0, size-1);
		
		System.out.println();
		System.out.println();
		
		System.out.println("sorted array:");
		showArray(0, size-1);
		
		
	}

}
