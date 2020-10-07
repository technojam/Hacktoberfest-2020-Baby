#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int sides,repeat,large,reps=0;
    int num[10];

    cout<<"Enter no. of sides for your DICE: ";
    cin>>sides;
    cout<<"===*** ROLLING..........."<<endl<<endl;
    num[0]=rand() % (sides +1);
    if(num[0]==0)
    {
       num[0]=1;
    }
    cout<<"Random Number: "<<num[0]<<endl;


    for(int i=1;i<10;i++)
    {
        cout<<endl<<"To Roll it again Press 1"<<endl;
        cin>>repeat;
        if(repeat==1)
        {
            cout<<"===*** ROLLING..........."<<endl<<endl;
            num[i]=rand() % (sides +1);
            if(num[i]==0)
            {
               num[i]=1;
            }
            cout<<"Random Number: "<<num[i]<<endl;

        }

    }

    cout<<endl;
    cout<<"Results are: [  ";

    for(int j=0;j<10;j++)
        {
            cout<< num[j] <<"  ";
        }
        cout<<"]";

     large=num[0];
     for(int j=0;j<10;j++)
     {
         if(large<num[j])
            large=num[j];

     }
     for(int j=0;j<10;j++)
     {
           if(num[j]==large)
            reps=reps+1;
     }

     cout<<endl<<endl;
     cout<<"Higest Number Displayed is "<<large<<" for "<<reps<<" times !!"<<endl;


}







/*Enter no. of sides for your DICE: 6
===*** ROLLING...........

Random Number: 6

To Roll it again Press 1
1
===*** ROLLING...........

Random Number: 1

To Roll it again Press 1
1
===*** ROLLING...........

Random Number: 6

To Roll it again Press 1
1
===*** ROLLING...........

Random Number: 5

To Roll it again Press 1
1
===*** ROLLING...........

Random Number: 3

To Roll it again Press 1
1
===*** ROLLING...........

Random Number: 2

To Roll it again Press 1
1
===*** ROLLING...........

Random Number: 5

To Roll it again Press 1
1
===*** ROLLING...........

Random Number: 1

To Roll it again Press 1
1
===*** ROLLING...........

Random Number: 5

To Roll it again Press 1
1
===*** ROLLING...........

Random Number: 6

Results are: [  6  1  6  5  3  2  5  1  5  6  ]

Higest Number Displayed is 6 for 3 times !!

Process returned 0 (0x0)   execution time : 10.432 s
Press any key to continue.*/
