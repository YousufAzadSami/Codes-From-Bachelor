public class mergeSort2 {

	static int a[] = { 16, 100, 12, 10, 8, 6, 4, 2 , 0};
	
	public static void main(String[] args) {

		
		int i;

		System.out.println("inputed array:::");
		for (i = 0; i < a.length; i++) {
			System.out.printf("%2d  ", a[i]);
		}
		System.out.println();

		a = mergeSort(0, a.length);

		System.out.println("sorted array:::");
		for (i = 0; i < a.length; i++) {
			System.out.printf("%2d  ", a[i]);
		}
		System.out.println();
	}

	private static int[] mergeSort( int low, int high) {

		int mid;
		int temporary[];
		mid = (high + low) / 2;

		if ((high - low) == 1) {
			temporary = new int[a.length];

			for (int i = 0; i < a.length; i++) {
				temporary[i] = a[i];
			}

			return temporary;

		}

		temporary = mergeSort( low, mid);
		temporary = mergeSort( mid, high);
		
		int returndArray[] = new int [a.length];
		
		for (int i = 0; i < a.length; i++) {
			returndArray[i] = a[i];
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
			

			// if (i == mid)
			// i--;
			// if (j == high)
			// j--;
		}

		return returndArray;
	}
}
