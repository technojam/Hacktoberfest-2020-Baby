import java.util.*;
public class AlphaRightPattern
{
    public static void main(String args[])
    {
  Scanner sc= new Scanner(System.in);
 System.out.println("Enter no of lines");
                int n=sc.nextInt();
                char ch='A';
                int k=n-1,l=0;
                for(int i=0;i<n;i++)
                {
                                ch='A';
                       for(int j=k;j>0;j--)
                                {
                   System.out.print("  ");
                                }
                                k--;
                     for(int j=0;j<=l;j++)
                                {
             System.out.print(ch++);
                                }
                                l++;
                   System.out.println();
            }              
    }
}
