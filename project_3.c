#include <stdio.h>
#include<string.h> 
#include<stdlib.h>
int menu (); void delay();
void not_admin();
struct Doctors
{ 
float Cardiologist;
float Nephrologist; float Neurologist;
 float Tot_Budget;
}
Doc;
struct Dept_MS
{ 
float Cardiology;
 float Nephrology;
 float Neurology;
 double Tot_Budget;
}
MS;
struct Dept_Surgery
{ float Cardiovascular;
 float Thoracic; 
double Tot_Budget;
}
Sur;
struct Pharmacy
{
 float Clinical;
 float Industrial; 
float Compounding;
 double Tot_Budget;
}
Phar;
struct D_and_R{
float Drugs_Cost;
 float Trails_cost; 
float Tot_Budget;
}
D_R1 ;
struct Laboratory
{
float Tools_Equipment;
 float Chemicals;
float Tot_Budget;
}
Lab;
struct Clinic_Budget
{
float P_C_costs;
 float Faci_Admin;
 float Tot_Budget;
}
C_B;
struct Nursing
{
float Health_Stats;
 float Mental_Health;
 float Tot_Budget;
}
Nur;
struct Non_Clinic_Budget
{
float Infras;
float Technicians;
 float Janitors;
 float Tot_Budget;
}
N_C_B;
void update_Doctors(float *d)
{
float nv; system("cls");
printf("Enter new value: "); 
scanf("%f",&nv);
*d = nv;
Doc.Tot_Budget = Doc.Neurologist + Doc.Nephrologist + Doc.Cardiologist;
 FILE *f;
f = fopen("doctors.bin","wb"); 
fwrite(&Doc,sizeof(struct Doctors),1,f); 
fclose(f);
}
void update_Dept_MS( float *dm)
{
float nv; system("cls");
printf("Enter new value: ");
 scanf("%f",&nv);
*dm = nv;
MS.Tot_Budget = MS.Neurology + MS.Nephrology + MS.Cardiology; 
FILE *f;
f = fopen("ms.bin","wb");
 fwrite(&MS,sizeof(struct Dept_MS),1,f);
 fclose(f);
}
void update_Dept_Surgery( float *ds)
{
float nv; system("cls");
printf("Enter new value: ");
scanf("%f",&nv);
*ds = nv;
Sur.Tot_Budget = Sur.Thoracic + Sur.Cardiovascular; 
FILE *f;
f = fopen("surgery.bin","wb"); 
fwrite(&Sur,sizeof(struct Dept_Surgery),1,f); 
fclose(f);
}
void update_Pharmacy(float *ph)
{
float nv; system("cls");
printf("Enter new value: "); 
scanf("%f",&nv);
*ph = nv;
Phar.Tot_Budget = Phar.Compounding + Phar.Industrial + Phar.Clinical;
 FILE *f;
f = fopen("pharmacy.bin","wb");
 fwrite(&Phar,sizeof(struct Pharmacy),1,f);
 fclose(f);
}
void update_Laboratory( float *n)
{
float nv; system("cls");
printf("Enter new value: "); 
scanf("%f",&nv);
*n = nv;
Lab.Tot_Budget = Lab.Tools_Equipment + Lab.Chemicals;
 FILE *f;
f = fopen("labs.bin","wb");
 fwrite(&Lab,sizeof(struct Laboratory),1,f);
 fclose(f);
}
void update_D_and_R( float *n)
{
float nv; system("cls");
printf("Enter new value: "); 
scanf("%f",&nv);
*n = nv;
D_R1.Tot_Budget = D_R1.Drugs_Cost + D_R1.Trails_cost; 
FILE *f;
f = fopen("drug.bin","wb");
fwrite(&D_R1,sizeof(struct D_and_R),1,f);
 fclose(f);
}
void update_Clinic_Budget( float *n)
{
float nv; system("cls");
printf("Enter new value: "); 
scanf("%f",&nv);
*n = nv;
C_B.Tot_Budget = C_B.Faci_Admin + C_B.P_C_costs;
 FILE *f;
f = fopen("clinic.bin","wb");
 fwrite(&C_B,sizeof(struct Clinic_Budget),1,f);
 fclose(f);
}
void update_Nursing( float *n)
{
float nv; system("cls");
printf("Enter new value: ");
 scanf("%f",&nv);
*n = nv;
Nur.Tot_Budget = Nur.Health_Stats + Nur.Mental_Health;
 FILE *f;
f = fopen("nursing.bin","wb");
fwrite(&Nur,sizeof(struct Nursing),1,f); 
fclose(f);
}
void update_Non_Clinic_Budget( float *n)
{
float nv; system("cls");
printf("Enter new value: ");
 scanf("%f",&nv);
*n = nv;
N_C_B.Tot_Budget = N_C_B.Infras + N_C_B.Janitors + N_C_B.Technicians; FILE *f;
f = fopen("nonclinic.bin","wb");
fwrite(&N_C_B,sizeof(struct Non_Clinic_Budget),1,f); fclose(f);
}
int main()
{
char ch; 
FILE *fptr1;
FILE *fptr2; 
FILE *fptr3;
FILE *fptr4;
FILE *fptr5;
FILE *fptr6;
FILE *fptr7;
FILE *fptr8;
FILE *fptr9;
fptr1 = fopen("drug.bin","rb");
fptr2 = fopen("labs.bin","rb");
fptr3 = fopen("clinic.bin","rb"); 
fptr4 = fope("nonclinic.bin","rb");
fptr5 = fopen("pharmacy.bin","rb");
fptr6 = fopen("nursing.bin","rb"); 
fptr7 = fopen("doctors.bin","rb"); 
fptr8 = fopen("ms.bin","rb");
fptr9 = fopen("surgery.bin","rb");
char c,ch2;
a:do{	printf("\n...................................................................................................... \n");
printf("\n          Medical          budget          of          India"); printf("\n	\n");
printf("	\n1.	Admin\n2.	User\n3.	Exit\n");
 printf("\n...................................................................................................... \n");
c = menu();
}
while(c==3);
b:
system("cls");                                                                    
printf("	\n");
printf("Enter your choice:\n");
printf("Press 1. Drug and research\n");
printf("Press 2. Laboratory set ups\n"); 
printf("Press 3. Clinical budget\n"); 
printf("Press 4. Non-Clinical budget\n");
printf("Press 5. Pharmacy\n");
printf("Press 6. Nursing\n"); 
printf("Press 7. Medical doctors\n");
printf("Press 8. Different department of medical sciences\n"); 
printf("Press 9. Different department of surgery\n"); 
printf("Enter b to go back\n");
printf("Enter                   e                   to                   exit\n");
printf("	\n");
ch = getche(); system("cls");
switch (ch) {
case '1': {fread(&D_R1, sizeof(struct D_and_R), 1, fptr1);
 printf("\n	\n");
printf("Drugs	and	research");
printf("\n...................................................................................................... \n");
printf("\n	Total	budget	\t%f",	D_R1.Tot_Budget); 
printf("\n...................................................................................................... \n");
printf("\n Individual budget");
printf("\n 1. Drugs costs \t%f",D_R1.Drugs_Cost); 
printf("\n 2. Trial costs \t%f",D_R1.Trails_cost);
printf("\n	\n");
printf("press any other key to go back\n");
ch2 = getch(); 
if(c==1)
{switch(ch2)
{case '1': update_D_and_R(&D_R1.Drugs_Cost); 
goto b;
break;
case '2': update_D_and_R(&D_R1.Trails_cost); 
goto b;
break; default: goto b;
}
}
else
{
switch(ch2)
{
case '1': not_admin();
goto b;
case '2': not_admin(); 
goto b;
default: goto b;
}
}
fclose(fptr1)
break;
}
case '2': {
fread(&Lab,	sizeof(struct	Laboratory),	1,	fptr2); 
printf("\n...................................................................................................... \n");
printf("Laboratory	setups"); 
printf("\n...................................................................................................... \n");
printf("\n	Total	budget	\t%f",	Lab.Tot_Budget); 
printf("\n...................................................................................................... \n");
printf("\n Individual budget");
printf("\n 1. Tools and equipments \t%f",Lab.Tools_Equipment); 
printf("\n	2.	chemicals	\t%f",Lab.Chemicals); 
printf("\n...................................................................................................... \n");
printf("press any other key to go back\n");
ch2 = getch();
 if(c==1)
{
switch(ch2)
{
case '1':
update_Laboratory(&Lab.Tools_Equipment); 
goto b;
break;
case '2': 
update_Laboratory(&Lab.Chemicals); 
goto b;
break; 
default: goto b;
}
}
else
{
switch(ch2)
{
case '1':
 not_admin(); 
goto b;
case '2':
not_admin();
goto b; 
default: goto b;
}
}
fclose(fptr2); 
break;
}
case '3': 
{
fread(&C_B,  sizeof(struct	Clinic_Budget),	1,fptr3); 
printf("\n...................................................................................................... \n");
printf("Clinical	budget"); 
printf("\n...................................................................................................... \n");
printf("\n	Total	budget	\t%f",	C_B.Tot_Budget); 
printf("\n...................................................................................................... \n");
printf("\n Individual budget");
printf("\n 1. Patient care costs \t%f",C_B.P_C_costs);
printf("\n 2. Facilities and Administration \t%f",C_B.Faci_Admin); 
printf("\n	\n");
printf("press any other key to go back\n");
ch2 = getch(); 
if(c==1)
{
switch(ch2)
{
case '1': 
update_Clinic_Budget(&C_B.P_C_costs); 
goto b;
break;
case '2': 
update_Clinic_Budget(&C_B.Faci_Admin); 
goto b;
break; 
default: goto b;
}
}
else
{
switch(ch2)
{
case '1':
 not_admin(); 
goto b;
case '2': 
not_admin(); 
goto b;
default: goto b;
}
}
fclose(fptr3);
 break;
}
case '4': 
{
fread(&N_C_B, sizeof(struct Non_Clinic_Budget), 1, fptr4); 
printf("\n	\n");
printf("Non	clinical	budget"); 
printf("\n...................................................................................................... \n");
printf("\n	Total	budget	\t%f",	N_C_B.Tot_Budget); 
printf("\n...................................................................................................... \n");
printf("\n Individual budget");
printf("\n 1. Infrastructure \t%f",N_C_B.Infras); printf("\n 2. Technician \t%f",N_C_B.Technicians); printf("\n 3. janitors \t%f",N_C_B.Janitors);
printf("\n	\n");
printf("press any other key to go back\n");
ch2 = getch(); 
if(c==1)
{
switch(ch2)
{
case '1': 
update_Non_Clinic_Budget(&N_C_B.Infras); 
goto b;
break;
case '2': 
update_Non_Clinic_Budget(&N_C_B.Technicians); 
goto b;
break;
case '3': 
update_Non_Clinic_Budget(&N_C_B.Janitors); goto b;
break; 
default: goto b;
}
}
else
{
switch(ch2)
{case '1': not_admin(); 
goto b;
case '2': not_admin(); 
goto b;
case '3': not_admin(); 
goto b;
default: goto b;
}
}
fclose(fptr4); 
break;
}
case '5': 
{
fread(&Phar,	sizeof(struct	Pharmacy),	1,	fptr5); 
printf("\n...................................................................................................... \n");
printf("\n	Pharmacy"); 
printf("\n...................................................................................................... \n");
printf("\n	Total	budget	\t%f",	Phar.Tot_Budget); 
printf("\n...................................................................................................... \n");
printf("\n Individual budget");
printf("\n 1. Clinical Pharmacy \t %f",Phar.Clinical); printf("\n 2. Industrial Pharmacy \t %f",Phar.Industrial);
printf("\n 3. Compounding Pharmacy \t %f",Phar.Compounding); 
printf("\n	\n");
printf("press any other key to go back\n"); 
ch2 = getch();
if(c==1)
{
switch(ch2)
{
case '1':
 update_Pharmacy(&Phar.Clinical); 
goto b;
break;
case '2':
 update_Pharmacy(&Phar.Industrial); 
goto b;
break;
case '3':
 update_Pharmacy(&Phar.Compounding); 
goto b;
break; 
default: goto b;
}
}
else
{
switch(ch2)
{
case '1': not_admin(); 
goto b;
case '2': not_admin(); 
goto b;
case '3': not_admin(); 
goto b;
default: goto b;
}
}
fclose(fptr5); 
break;
}
case '6': 
{
fread(&Nur,	sizeof(struct	Nursing),	1,	fptr6); 
printf("\n...................................................................................................... \n");
printf("\n	Nursing"); 
printf("\n...................................................................................................... \n");
printf("\n	Total	budget	\t%f",	Nur.Tot_Budget); 
printf("\n...................................................................................................... \n");
printf("\n Individual budget");
printf("\n 1. Health Statistics \t %f",Nur.Health_Stats);
printf("\n 2. Psychatric Mental Health \t %f",Nur.Mental_Health); 
printf("\n	\n");
printf("press any other key to go back\n");
 ch2 = getch();
if(c==1)
{
switch(ch2)
{
case '1': update_Nursing(&Nur.Health_Stats);
 goto b;
break;
case '2': update_Nursing(&Nur.Mental_Health);
 goto b;
break;
 default: goto b;
}
}
else
{
switch(ch2)
{
case '1': not_admin();
 goto b;
case '2': not_admin();
 goto b;
default: goto b;
}
}
fclose(fptr6);
 break;
}
case '7':
 {
fread(&Doc,	sizeof(struct	Doctors),	1,	fptr7); 
printf("\n...................................................................................................... \n");
printf("\n	Medical	Doctors");
 printf("\n.................................................................................................... \n");
printf("\n	Total	budget	\t%f",	Doc.Tot_Budget);
 printf("\n...................................................................................................... \n");
printf("\n Individual budget");
printf("\n 1. Cardiologist \t %f",Doc.Cardiologist);
 printf("\n 2. Nephrologist \t %f",Doc.Nephrologist);
 printf("\n 3. Neurologist \t %f",Doc.Neurologist);
printf("\n	\n");
printf("press any other key to go back\n"); 
ch2 = getch();
if(c==1)
{
switch(ch2)
{
case '1':update_Doctors(&Doc.Cardiologist);
goto b; 
break;
case '2': update_Doctors(&Doc.Nephrologist);
 goto b;
break;
case '3': update_Doctors(&Doc.Neurologist);
 goto b;
break; 
default: goto b;
}
}
else
{
switch(ch2)
{
case '1': not_admin();
 goto b;
case '2': not_admin();
 goto b;
case '3': not_admin();
 goto b;
default: goto b;
}
}
fclose(fptr7);
 break;
}
case '8':
 {
fread(&MS,	sizeof(struct	Dept_MS),	1,	fptr8);
 printf("\n...................................................................................................... \n");
printf("\n Different departments of medical Sciences");
 printf("\n...................................................................................................... \n");
printf("\n	Total	budget	\t%f",	MS.Tot_Budget);
 printf("\n...................................................................................................... \n");
printf("\n Individual budget");
printf("\n 1. Cardiology \t %f",MS.Cardiology); printf("\n 2. Nephrology \t %f",MS.Nephrology); printf("\n 3. Neurology \t %f",MS.Neurology);
printf("\n	\n");
printf("press any other key to go back\n");
ch2 = getch(); 
if(c==1)
{
switch(ch2)
{
case '1':
 update_Dept_MS(&MS.Cardiology); 
goto b;
break;
case '2': 
update_Dept_MS(&MS.Nephrology); 
goto b;
break;
case '3': 
update_Dept_MS(&MS.Neurology); 
goto b;
break; 
default: goto b;
}
}
else
{
switch(ch2)
{
case '1': not_admin(); 
goto b;
case '2': not_admin();
 goto b;
case '3': not_admin(); 
goto b;
default: goto b;
}
}
fclose(fptr8);
break;
}
case '9': 
{
fread(&Sur,	sizeof(struct	Dept_Surgery),	1,	fptr9); 
printf("\n...................................................................................................... \n");
printf("\n	Different	departments	of	surgery"); 
printf("\n...................................................................................................... \n");
printf("\n	Total	budget	\t%f",	Sur.Tot_Budget); 
printf("\n...................................................................................................... \n");
printf("\n Individual budget");
printf("\n 1. Cardiovascular surgery \t %f",Sur.Cardiovascular); 
printf("\n   2.   Thoracic   surgery    \t    %f",Sur.Thoracic); 
printf("\n	\n");
printf("press any other key to go back\n"); 
ch2 = getch();
if(c==1)
{
switch(ch2)
{
case '1': 
update_Dept_Surgery(&Sur.Cardiovascular); 
goto b;
break;
case '2': 
update_Dept_Surgery(&Sur.Thoracic); 
goto b;
break; 
default: goto b;
}
}
else
{
switch(ch2)
{
case '1': not_admin(); 
goto b;
case '2': not_admin(); 
goto b;
default: goto b;
}
}
fclose(fptr9);
break;
}
case 'b': system("cls"); 
goto a;
case 'e': system("cls"); 
exit(0);
default:
system("cls"); 
goto b;
}
return 0;
}
int menu ()
{
char password[] = "Project 2"; 
char input1[20];
char c;
c = getche(); 
switch(c)
{
case '1':	system("cls");
printf("Input password\n");
// scanf("%[^\n]s",&input1); 
fgets(input1,10,stdin);
if (strcmp(password,input1) == 0) return 1;
else
{
system("cls");
printf("Incorrect password, try again.\n"); delay();
system("cls"); 
return 3;
}
break;
case '2': system("cls");
return 2; 
break;
case '3': system("cls"); 
exit(0);
break;
default : system("cls");
return 3; 
break;
}
}
void delay()
{
int c, d;
for (c = 1; c <= 32767; c++) for (d = 1; d <= 32767; d++)
{}
}
void not_admin()
{
system("cls");
printf("\nYou are not an admin"); 
delay();
}
