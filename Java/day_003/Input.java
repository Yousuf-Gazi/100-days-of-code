//including package file for Scanner
import java.util.Scanner;

public class Input {
	public static void main(String[] args) {
		//taking input in java from keyboard
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		//basic operation
		System.out.println(a + b);
		System.out.println(a - b);
		System.out.println(a * b);
		System.out.println(a / b);
		//finding out the maxmimus value and minimum value
		System.out.println(Integer.MAX_VALUE);
		System.out.println(Integer.MIN_VALUE);
	}
}
