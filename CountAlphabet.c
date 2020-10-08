#include<stdio.h>
#include<stdlib.h>

int main()
{
  char str[10];
  printf("Enter your alpha numeric:-");
  scanf("%s",& str);
  
  int alphabet=0,number=0, i;
  for(i=0;str[i]!='\0'; i++)
  {
  
      if (isalpha(str[i]) !=0)
        aphabet++;
      else if (isdigit(str[i]) !=0)
        number++;
   }
   
   printf("Alphabetic_Letters=%d,"
       "Decimal_digits=%d\n", alphabet, number);
       
         return 0;
         }
