#include<stdio.h>
#include<stdlib.h>

int main() {
   int row , col ;
   scanf("%d",&row);
   scanf("%d",&col);
   int *arr = (int *)malloc(row * col * sizeof(int)); 
   int i, j,sum = 0;
   for (i = 0; i < row; i++){
      for (j = 0; j < col; j++){
        scanf("%d",&*(arr + i*col + j));
        sum += *(arr + i*col + j);
      }
   }
    printf("The sum of all the elements is %d",sum);
   
   free(arr); 
   return 0;
}
