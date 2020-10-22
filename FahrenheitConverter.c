#include <stdio.h>

int main()
{
    int celcius;
    float fahrenheit;
    printf("enter the celcius : ",celcius);
    scanf("%d",&celcius);
    fahrenheit=celcius*1.8+32;
    printf("fahrenheit ---> %f",fahrenheit);
   return 0;
}