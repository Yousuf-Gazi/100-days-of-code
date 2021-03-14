import java.util.Arrays;

public class Arraycopymethod {
	public static void main(String[] args) {
		int[] source = {1, 2, 3, 4, 5, 6};
		int[] test = new int[5];
		int[] destination = new int[source.length];

		//to copy whole array
		System.arraycopy(source, 0, destination, 0, source.length);
		System.out.println(Arrays.toString(destination));

		//desired copied array
		System.arraycopy(source, 1, test, 2, 2);
		System.out.println(Arrays.toString(test));
	}
}
