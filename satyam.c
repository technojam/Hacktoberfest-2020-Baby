#include <stdio.h>>
int largest_among_three(int a, int b, int c)
{
if(a > b && a > c)
return a;
else if(b > a && b > c)
return b;
else
return c;
}
int main()
{
int a,b,c;
printf(“nEnter three numbers : “);
scanf(“%d %d %d”,&a,&b,&c);
int max = largest_among_three(a,b,c);
printf(“nThe largest among the three numbers is %d ” , max);
printf(“n”);
return 0;
}
