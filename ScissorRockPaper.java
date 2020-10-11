package game;
import java.util.Random;
import java.util.Scanner;

public class Game {
   public static void main(String[]args){
   Scanner sc= new Scanner(System.in);
 System.out.println("Enter '1' for scissor \nEnter'2' for rocks \nEnter '3' for paper");
 for (int i=1; i<=3;i++) {
 System.out.println("your turn Enter your number: ");
 int num = sc.nextInt();
 switch(num){
 case 1:
 System.out.println("you have Scissor ");
 break;
 case 2:
 System.out.println("you have Rocks ");
 break;
 case 3:
 System.out.println("you have Paper ");
 break;
 default:
 System.out.println("please Enter number 1,2 & 3");
 }
 System.out.println();
 System.out.println("Computer Turn");
 Random r= new Random();
 int low=1;
 int high=3;
 int result = r.nextInt(high - low)+low;
 System.out.println(result);
 switch(result){
 case 1:
 System.out.println("Computer have scissor ");
 break;
 case 2:
 System.out.println("Computer have Rocks ");
 break;
 case 3:
 System.out.println("Computer have Paper ");
 break;
 
 }
 System.out.println();
 
 if (result==1 && num==1 || result==2 && num==2 || result==3 && num==3){
   System.out.println("match is draw");
   }else if (result==2 && num==1 || result==3 && num==2 || result==1 && num==3) {
      System.out.println("COMPUTER WIN");
      }else{
      System.out.println("USER WIN ");
            }
                }
                }
  }
 
 
