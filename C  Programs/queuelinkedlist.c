#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
 struct node
 {
 int info;
 struct node *next;
 }*front,*rear;
 void creat()
 {
 struct node *ptr,*cpt;
 char ch;
 ptr=(struct node*)malloc(sizeof(struct node));
 printf("Enter value: ");
 scanf("%d",&ptr->info);
 front=ptr;
 do
 {
 cpt=(struct node*)malloc(sizeof(struct node));
 printf("Enter value: ");
 scanf("%d",&cpt->info);
 ptr->next=cpt;
 ptr=cpt;
 printf("Enter (y or Y) to continue: ");
 ch=getch();
 }while(ch=='Y'||ch=='y');
 rear=ptr;
 rear->next='\0';
 }
 void insert()
 {
 struct node *ptr;
 ptr=(struct node*)malloc(sizeof(struct node));
 if(ptr=='\0')
 {
 printf("Quee overflow");
 return;
 }
 printf("Enter value:  ");
 scanf("%d",&ptr->info);
 ptr->next='\0';
 if(rear=='\0')
 {
 front=ptr;
 rear=ptr;
 return;
 }
 rear->next=ptr;
 rear=ptr;
 }
 void delet()
 {
 struct node *ptr;
 if(front=='\0')
 {
 printf("Quee underflow");
 return;
 }
 /*if(front==rear)
 {
 free(front);
 rear='\0';
 return;
 }*/
 ptr=front;
 front=ptr->next;
 free(ptr);
 }
 void display()
 {
 struct node *ptr;
 ptr=front;
 while(ptr!='\0')
 {
 printf("%d\t",ptr->info);
 ptr=ptr->next;
 }
 }
 main()
 {
 int i,n=0,p,m=0;
 creat();
 display();
 printf("Insert operations\n");
 printf("How many values you want to Insert:  ");
 scanf("%d",&i);
 while(n!=i)
 {
 insert();
 n++;
 }
 display();
 printf("delet operation\n");
 printf("How many values you want to delet:  ");
 scanf("%d",&p);
 while(m!=p)
 {
 delet();
 m++;
 }
 display();
 getch();
 }


 



