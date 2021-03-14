import java.util.Arrays;

public class Copyarrayloop {
	public static void main(String[] args) {
		int[] source = {1, 2, 3, 4, 5, 6};
		int[] destination = new int[source.length];

		for (int i = 0; i < source.length; i++) {
			destination[i] = source[i];
		}

		System.out.println(Arrays.toString(destination));
	}
}
