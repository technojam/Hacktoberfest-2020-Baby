package whileLoop;

import java.util.Scanner;

public class Palindrome {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number: ");
		int n = sc.nextInt();
		int temp = n;
		int reversedNumber = 0;
		
		while(temp != 0) {
			int remainder = temp % 10;
			reversedNumber = reversedNumber * 10 + remainder;
			temp = temp / 10;
		}
		
		if(n == reversedNumber) {
			System.out.println("the number is palindrome");
		}else {
			System.out.println("the number is not palindrome");
		}

	}

}
