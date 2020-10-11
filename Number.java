import java.util.Scanner;

public class Number 
{
   public static void main(String args[]){
      int n;
      System.out.println("Enter a number ::");
      Scanner sc = new Scanner(System.in);
      n = sc.nextInt();

      if (n > 0){
         System.out.println("The number is a positive integer");
      } 
      else if(n < 0){
         System.out.println("The number is a negative integer");
      } 
      else {
         System.out.println("The number is neither positive nor negative integer");
      }
   }
}
