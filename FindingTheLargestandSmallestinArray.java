import java.util.Arrays;
import java.util.*;
import java.lang.*;  
public class SortExample 
{ 
    public static void main(String[] args) 
    { 
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();//inputting the array size
        int arr[] =new int[n]; 
        for(int j=0;j<n;++j)
        {
            arr[j]=sc.nextInt();} 
        Arrays.sort(arr); // Sorts arr[] in descending order
          System.out.println("Largest Element:"+" "+arr[0]);
          System.out.println("Smallest Element:"+" "+arr[n-1]);
        }
    } 
