package whileLoop;

import java.util.Scanner;

public class sumOfDigit {

	public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			long n = sc.nextInt();
			long temp = n;
			long sum = 0;
			while(temp > 0) {
				
				long ld = temp % 10;
				temp /= 10;
				sum += ld;
			}
			System.out.println(sum);
	}

}
