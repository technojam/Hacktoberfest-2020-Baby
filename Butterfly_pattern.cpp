#include <iostream>
using namespace std; 
int main()
{
    int i, j, n;
    cout<<"Enter the value for n";
    cin >> n;
    // upper half
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            if(i>=j) //left part
                cout <<"*";
            else
                cout <<" ";
            if(i >= (2*n-1)-j)  //right part
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
    //lower half
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2 * n);j++)
        {
            if(i + j<=n - 1)  //left part
                cout <<"*";
            else
                cout <<" ";
            if((i + n)<=j)  //right part
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
    return 0;
}
