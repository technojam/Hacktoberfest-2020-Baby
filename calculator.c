#include<stdio.h>
#include<math.h>

int main()
{
    int operation;
    float a,b;
    float result;
    printf("[1] Addition \n");
    printf("[2] Subtraction \n");
    printf("[3] Multiplication \n");
    printf("[4] Dividation \n");
    while(1){
    printf("\n\nChoose Your Operation :",operation);
    scanf("%d",&operation);
    switch (operation){
        case 1:
            printf("Addition:\n");
            printf("Enter 1st number :",a);
            scanf("%f",&a);
            printf("Enter 2nd number :",b);
            scanf("%f",&b);
            result = a + b;
            printf("result is : %f", result);
            break;
        case 2:
            printf("Subtraction:\n");
            printf("Enter 1st number :",a);
            scanf("%f",&a);
            printf("Enter 2nd number :",b);
            scanf("%f",&b);
            result = a - b;
            printf("result is : %f", result);
            break;   
        case 3:
            printf("Multiplication:\n");
            printf("Enter 1st number :",a);
            scanf("%f",&a);
            printf("Enter 2nd number :",b);
            scanf("%f",&b);
            result = a * b;
            printf("result is : %f", result);
            break;
        case 4:
            printf("Dividation:\n");
            printf("Enter 1st number :",a);
            scanf("%f",&a);
            printf("Enter 2nd number :",b);
            scanf("%f",&b);
            result = a / b;
            printf("result is : %f", result);
            break;
         default : printf("Invalid Input!");
           }
        }
            
    return 0;
}