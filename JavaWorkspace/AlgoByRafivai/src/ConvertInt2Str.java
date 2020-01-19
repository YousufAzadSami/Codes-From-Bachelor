public class ConvertInt2Str {
	public static String convertSimple(int i) {
		return "" + i;
	}

	public static String convertInteger(int i) {
		return Integer.toString(i);
	}

	public static String convertFormat(int i) {
		return String.format("%d", i);
	}

	public static void main(String[] args) {
		for (int i = 0; i <= 46; i++) {
			System.out.println(convertInteger(i) + " <=> " + convertSimple(i)
					+ " <=> " + convertFormat(i));
		}
	}
}