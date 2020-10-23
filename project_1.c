#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE * fp = fopen("t.txt", "r");
 char data[50];
if ( fp == NULL){
printf( "Could not open file t.txt" ) ;
 return 1;
}
int a; int b;
printf("Select a value from the list : \n a. Maintainence = 1 \n b. Electricity = 2\n c. IT
infrastructures = 3\n d. Lab infrastructures = 4\n e. Hostel = 5\n f. Internet = 6");
printf("\nEnter a no. from the list:");
scanf("%d",&a);
switch(a){
case 1:
printf("Select a value from the list : \ni. Building maintenance = 1 \nii. Mess maintenance = 2 \niii. Gardening/Horticultureiv = 3 \niv. Housekeeping = 4 \nv. Appliances =5");
printf("\nEnter a no. from the list: "); 
scanf("%d",&b);
break; case 2:
printf("Select a value from the list : \ni. IT Labs = 1 \nii. Non IT Labs = 2 \niii. Classroom= 3 \niv. Gadget offices = 4 \nv. Faculty cabins = 5 \nvi. Library = 6 \nvii. Premises = 7"); 
printf("\nEnter a no. from the list: ");
scanf("%d",&b); break;
}
int i = 0;
while( fgets ( data, 50, fp ) != NULL ){ switch(a){ case 1:
switch(b){ case 1:
if(i == 2){
printf( "%s" , data );
 break;
}
break; case 2:
if(i == 3){
printf( "%s" , data ); 
break;
}
break; case 3:
if(i == 4){
printf( "%s" , data ); 
break;
}
break; case 4:
if(i == 5)
{
printf( "%s" , data ); break;
}
break; case 5:
if(i == 6)
{
printf( "%s" , data );
}
break;
}
break;
 case 2:
switch(b)
{ 
case 1:
if(i == 10){
printf( "%s" , data );
break;
}
break; case 2:
if(i == 11)
{
printf( "%s" , data ); break;
}
break;
case 3:
if(i == 12)
{
printf( "%s" , data ); break;
}
break; 
case 4:
if(i == 13)
{
printf( "%s" , data ); 
break;
}
break; 
case 5:
if(i == 14)
{
printf( "%s" , data );
 break;
}
break; 
case 6:
if(i == 15)
{
printf( "%s" , data ); 
break;
}
break;
}
break; 
case 3:
if(i == 17)
{
printf( "%s" , data ); 
break;
}
break; 
case 4:
if(i == 19)
{
printf( "%s" , data ); 
break;
}
break; 
case 5:
if(i == 21)
{
printf( "%s" , data ); 
break;
}
break; 
case 6:
if(i == 23)
{
printf( "%s" , data );
break;
}
break;
}
 i++;
}
fclose(fp); 
return 0;
}
