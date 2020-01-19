public class mergeSort {

	public static void main(String[] args) {

		int a[] = { 166, 14, 12659, 106, 8, 6, 4, 2 };
		int i;

		System.out.println("inputed array:::");
		for (i = 0; i < a.length; i++) {
			System.out.printf("%2d  ", a[i]);
		}
		System.out.println();

		//a = mergeSort(a, 0, a.length);
		a = mergeSort(a, 0, a.length, 0);

		System.out.println("sorted array:::");
		for (i = 0; i < a.length; i++) {
			System.out.printf("%2d  ", a[i]);
		}
		System.out.println();
	}
	
	private static int[] mergeSort(int passedArray[], int low, int high, int recursiveCounter) {

		int mid;
		int temporary[];
		mid = (high + low) / 2;
		
		System.out.printf("\n\n");
		System.out.println("PASSED_ARRAY:");
		for (int k = 0; k < passedArray.length; k++) {
			System.out.printf("%3d  ", passedArray[k]);
		}
		System.out.printf("\n\n");

		if ((high - low) == 1) {
			temporary = new int[passedArray.length];

			for (int i = 0; i < passedArray.length; i++) {
				temporary[i] = passedArray[i];
			}

			return temporary;

		}

		temporary = mergeSort(passedArray, low, mid, recursiveCounter+1);
		temporary = mergeSort(temporary, mid, high, recursiveCounter+1);
		
		int returndArray[] = new int [passedArray.length];
		
		for (int i = 0; i < passedArray.length; i++) {
			returndArray[i] = passedArray[i];
		}

		int i, j, counter = low;
		i = low;
		j = mid;

		
		// SOME OPTIMIZATION IS URGENTLY NEEDED
		while (counter < (high )) {

			if (i == mid) {
				while (j < high) {
					returndArray[counter] = temporary[j];
					j++;
					counter++;
				}
			} else if (j == high) {
				while (i < mid) {
					returndArray[counter] = temporary[i];
					i++;
					counter++;
				}
			} else if (temporary[i] < temporary[j]) {
				returndArray[counter] = temporary[i];
				i++;
				counter++;
			} else if (temporary[j] < temporary[i]) {
				returndArray[counter] = temporary[j];
				j++;
				counter++;
			}

		}

		//SHOWING RESULTS 
		System.out.printf("\n\n");
		System.out.println("temporary:");
		for (int k = 0; k < temporary.length; k++) {
			System.out.printf("%3d  ", temporary[k]);
		}
		System.out.println();
		
		System.out.println("returndArray:");
		for (int k = 0; k < returndArray.length; k++) {
			System.out.printf("%3d  ", returndArray[k]);
		}
		System.out.printf("\n\n");
		
		return returndArray;
	}

	private static int[] mergeSort(int passedArray[], int low, int high) {

		int mid;
		int temporary[];
		mid = (high + low) / 2;
		
		System.out.printf("\n\n");
		System.out.println("PASSED_ARRAY:");
		for (int k = 0; k < passedArray.length; k++) {
			System.out.printf("%3d  ", passedArray[k]);
		}
		System.out.printf("\n\n");

		if ((high - low) == 1) {
			temporary = new int[passedArray.length];

			for (int i = 0; i < passedArray.length; i++) {
				temporary[i] = passedArray[i];
			}

			return temporary;

		}

		temporary = mergeSort(passedArray, low, mid);
		temporary = mergeSort(temporary, mid, high);
		
		int returndArray[] = new int [passedArray.length];
		
		for (int i = 0; i < passedArray.length; i++) {
			returndArray[i] = passedArray[i];
		}

		int i, j, counter = low;
		i = low;
		j = mid;

		
		// SOME OPTIMIZATION IS URGENTLY NEEDED
		while (counter < (high )) {

			if (i == mid) {
				while (j < high) {
					returndArray[counter] = temporary[j];
					j++;
					counter++;
				}
			} else if (j == high) {
				while (i < mid) {
					returndArray[counter] = temporary[i];
					i++;
					counter++;
				}
			} else if (temporary[i] < temporary[j]) {
				returndArray[counter] = temporary[i];
				i++;
				counter++;
			} else if (temporary[j] < temporary[i]) {
				returndArray[counter] = temporary[j];
				j++;
				counter++;
			}

		}

		//SHOWING RESULTS 
		System.out.printf("\n\n");
		System.out.println("temporary:");
		for (int k = 0; k < temporary.length; k++) {
			System.out.printf("%3d  ", temporary[k]);
		}
		System.out.println();
		
		System.out.println("returndArray:");
		for (int k = 0; k < returndArray.length; k++) {
			System.out.printf("%3d  ", returndArray[k]);
		}
		System.out.printf("\n\n");
		
		return returndArray;
	}
}
