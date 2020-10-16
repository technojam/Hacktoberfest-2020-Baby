#include <stdio.h>

int main()
{
    int r1,r2,h;
    float tsa;
    printf("enter the r1 of hollow cylinder :",r1);
    scanf("%d",&r1);
    printf("enter the r2 of hollow cylinder :",r2);
    scanf("%d",&r2);
    printf("enter the height of hollow cylinder :",h)
    scanf("%d",&h);
    tsa = 6.282 * (r1 + r2) * (r2 - r1 + h);
    printf("Total surface area of hollow cylinder --->%f",tsa);
    return 0;
}
