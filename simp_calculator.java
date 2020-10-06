import java.util.*;
class Abc
{
	public static void main(String arg[])
	{
		System.out.println("Welcome to Simple Calculator");
		System.out.println("Enter Two Numbers :");
		Scanner sc=new Scanner(System.in);
			float a =sc.nextInt();
		Scanner sc1=new Scanner(System.in);
		float b =sc1.nextInt();
		System.out.println("Select Operation :");
		System.out.println("1. Add");
		System.out.println("2. Subtract");
		System.out.println("3. Multiplication");
		System.out.println("4. Division");
		Scanner sc2=new Scanner(System.in);
		int num =sc2.nextInt();
		switch(num)
		{
			case 1:
			System.out.println("The Sum is "+(a+b));
			break;
			case 2:
			System.out.println("The Difference is "+(a-b));
			break;
			case 3:
			System.out.println("The Product is "+(a*b));
			break;
			case 4:
			System.out.println("The Division is "+(a/b));
			break;
			default:
			{
			System.out.println("pagal hai kya...");
			break;	
		}
		}
	}
}
