public class Shallowcopy {
	public static void main(String[] args) {
		int[] numbers = {1, 2, 3, 4, 5, 6};
		int[] copied = numbers;

		for (int i = 0; i < copied.length; i++) {
			System.out.println(copied[i]);
		}
	}
}
