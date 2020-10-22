#include  <stdio.h>

int main()
{
  float B, Cr, Dr, Net;
  int cmd;
// Enter the balance to open the account
  printf("Account Opening Balance : ");
  scanf("%f", &B);
// Transaction Options
  printf("\n[1] Credit Balance");
  printf("\n[2] Debit Balance");
  printf("\n[3] Balance Enquiry\n");
// Select Transaction Option
  printf("\nSelect Option : ");
  scanf(" %d", &cmd);
  
  switch(cmd)
        {
        // Credit Balance
     case 1: 
           printf("Enter Amount : ");
           scanf("%f",&Cr);
           Net = B+Cr;
           printf("\nCurrent Balance : %f", Net);
           break;
        // Debit Balance
     case 2: 
           printf("\nEnter Amount : ");
           scanf("%f",&Dr);
           Net = B-Dr;
           printf("\nCurrent Balance : %f", Net);
           break;
        // Balance Enquiry
     case 3: 
           Net = B;
           printf("Available Balance : %f", Net);
           break;
           default : printf("Transaction Cancelled!");
        }
  
  return 0;
}
    