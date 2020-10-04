#include<stdio.h>
#include<conio.h>
int main()
{
  int i=2,sum=0,inp;
  printf("Welcome to the game");
  do
  {
      sum=2*i;
      printf("What is %d + %d ?",i,i);
      scanf("%d",&inp);
      if(sum==inp)
      {
          printf("Congratulations,You are a genius!!!!!");
      }
      else
      {
          printf("Wrong answer,You are out :-(");
          break;
      }
   i=sum;
  }while(sum==inp);
  return 0;
}
