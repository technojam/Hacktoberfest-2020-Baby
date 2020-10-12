import java.util.Scanner;
public class IMEI_CheckDigit
{
  //Function for getting sum of 2-digit numbers in an array after
  //twice of values at odd places.
    
  public static int fun(int n)
  {
      int sum=0;
      int temp=n;
      while(temp>0)
      {
          int rem=temp%10;
          sum=sum+rem;
          temp=temp/10;
      }
      return sum;
  }
    
  //Driver Code.  
  public static void main(String [] args)
  {
     Scanner input=new Scanner(System.in);
     System.out.println("Enetr 14 digits of IMEI No.=");
     int arr[]=new int[14];
     for(int i=0;i<14;i++)
     {
         arr[i]=input.nextInt();
     }
     
     //Doing twice of values at odd places in the array.
     
     for(int i=0;i<14;i++)
     {
         if(i%2!=0)
         {
             arr[i]=2*arr[i];
         }
     }

     
     int sum1=0,sum2=0,sum3;
     int i=0;
     while(i<14)
     {
         if(arr[i]>=10)
         {
             int result=fun(arr[i]);
             sum1=sum1+result;
         }
         else
         {
             sum2=sum2+arr[i];
         }
         i++;
     }
     
     sum3=sum1+sum2;
     System.out.println("Sum1= "+sum1);
     System.out.println("Sum2= "+sum2);
     System.out.println("Sum3= "+sum3);
     int a=sum3*9;
     int b=a%10;
     System.out.println("Check Digit= "+b);
  }
}
         
