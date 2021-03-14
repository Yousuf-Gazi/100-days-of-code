import java.util.Arrays;

public class ArrayCopyOfRangeMethod {
	public static void main(String[] args) {
		int[] source = {2, 3, 12, 4, 13, -2};

		//copying whole array
		int[] destination1 = Arrays.copyOfRange(source, 0, source.length);
		System.out.println(Arrays.toString(destination1));

		//copying desired array
		int[] destination2 = Arrays.copyOfRange(source, 2, 5);
		System.out.println(Arrays.toString(destination2));
	}
}
