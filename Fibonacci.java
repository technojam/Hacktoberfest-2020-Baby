/**
 * 
 * @author Varun
 *
 */
public class Fibonacci {
	public static void main(String[] args) {
		int k, a = 1, b = 1;
        int n = 10;
		k = 0;
		System.out.print("1 1 ");
		while (k <= n) {
			k = a + b;
			System.out.print(k + " ");
			a = b;
			b = k;
		}
	}
}
