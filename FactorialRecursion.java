import java.util.Scanner;
public class  FactorialRecursion{
public static void main(String[] args)
{
Scanner sc = new Scanner(System.in);
int n =sc.nextInt();
int ans = factorial(n);
System.out.println(ans);
}
public static int factorial(int n)
{
  if(n <=1)
  {
  return 1;
  }
  return n* factorial(n-1);
 }
    
