import java.util.Arrays;

public class Array3d {
	public static void main(String[] args) {
		int[][][] array3d = {
			{
				{1, -2, 3},
				{2, 3, 4},
			},
			{
				{-4, -5, 6, 9},
				{1},
				{2, 3},
			}
		};

		//for-each loop to print all the element
		for (int[][] array2d: array3d) {
			for (int[] array1d: array2d) {
				for (int item: array1d) {
					System.out.println(item);	
				}
			}
		}

		System.out.println(Arrays.deepToString(array3d));	
	}
}
