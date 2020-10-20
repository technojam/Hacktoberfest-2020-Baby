package array;

import java.util.Scanner;

public class SmallestLargest {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int count, max, min, i;
		int[] inputArray = new int[500];
		
		System.out.print("Enter the number of elements : ");
		count = in.nextInt();
		System.out.println("Enter " +  count  + " elements");
		
		for(i = 0; i < count; i++) {
			inputArray[i] = in.nextInt();
			
		}
		
		max = min = inputArray[0];
		
		for(i = 1; i < count; i++) {
			if(inputArray[i] > max) {
				max = inputArray[i];
			}else if (inputArray[i] < min) {
				min = inputArray[i];
			}
			System.out.println("Largest number: " + max);
			System.out.println("Smallest number: " + min);
			}
		}

}
