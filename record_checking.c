#include <stdio.h>
#include <string.h>
struct student
{
int id;
char name [20] ;
float percentage;
};
void func(struct student record);
int main()
{

struct student record;
record. id=1;
strcpy(record.name,"Ritik");
record.percentage = 86.5;
func(record);
return 0;
}
void func(struct student record)
{
printf(" Id is: %d \n", record. id);
printf(" Name is: %s \n", record. name);
printf(" Percentage is:%f  \n", record.percentage);
}
