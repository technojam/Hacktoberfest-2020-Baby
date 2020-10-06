public class Array_rotation {

	static void Leftrotate(int ar[],int d,int n)
	{
	 int[] re=new int[d];
	 for(int i=0;i<d;i++)
	 {
		re[i]=ar[i];
	 }
	 for(int j=0;j<n-d;j++)
	 {
		 ar[j]=ar[j+d];
	 }
	 int no=0;
	 for(int k=(n-d);k<n;k++)
	 {
		 ar[k]=re[no];
		 no++;
	 } 
	}
	static void printarray(int ar[],int n)
	{
		for(int i=0;i<n;i++)
		{
			System.out.print(ar[i]+" ");
		}
		
	}
	public static void main(String[] args) {
		int[] a= {1,2,3,4,5,6,7};
		int n=7;
		int posn=4;
		Leftrotate(a,posn,n);
		printarray(a,n);

	}

}
