import java.lang.*;
import java.util.*;
class addmatrice
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Length");
        int m=sc.nextInt();//No. of rows
        int n=sc.nextInt();//No.of columns
        int a[][]=new int[m][n];
        int b[][]=new int[m][n];
        int c[][]=new int[m][n];//Storing sum of matrices 
        System.out.println("Enter the elments of two matrices Simultaneously");
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                a[i][j]=sc.nextInt();
                b[i][j]=sc.nextInt();
                 c[i][j]=a[i][j]+b[i][j];//Calculating sum
                }}   
                System.out.println("Resultant Matrix is:");
                for(int k=0;k<m;++k)
                {
                    for(int t=0;t<n;++t)
                    {
                        System.out.println(c[k][t]);//displaying the elements
                    }}
                }
            }
