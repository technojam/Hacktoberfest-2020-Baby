#include<bits/stdc++.h>
using namespace std;

int lastElement(long long int n, int a[], int k,long long int i)
{
     i=n-1;
    {
        if(n==0)
        {
            return -1;
        }
        
        if(a[i]==k)
        {
            return i;
        }
        
        return lastElement(n-1,a,k,i-1);
        
    }
}
int main()
{
   long long int n,i;
    
    cin>>n;
    
    int a[10000];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int k;
    
    cin>>k;
    
    cout<<lastElement(n,a,k,i);
    
    return 0;
}