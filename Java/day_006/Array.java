public class Array {
	public static void main(String[] args) {
		int[] numbers = {2, -9, 0, 5, 12, -25, 22, 9, 8, 12};
		int sum = 0;

		for (int number: numbers) {
			sum += number;
		}

		double  average = (double)sum / (double)numbers.length;

		System.out.println(sum);
		System.out.println(average);
	}
}
