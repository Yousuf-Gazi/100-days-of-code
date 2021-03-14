import java.util.Arrays;

public class Array2dCopyLoop {
	public static void main(String[] args) {
		int[][] source = {
			{1, 2, 3, 4},
			{5, 6},
			{0, 2, 42, -4, 5}
		};

		int[][] destination = new int[source.length][];

		for (int i = 0; i < source.length; i++) {
			//memory allocate for row
			destination[i] = new int[source[i].length];

			for (int j = 0; j < source[i].length; j++) {
				destination[i][j] = source[i][j];
			}
		}

		System.out.println(Arrays.deepToString(destination));
	}
}
