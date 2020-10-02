  
#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;
// Lower Triangular Matrix.

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i<j)
                cout<<0<<" ";
            else
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

// Upper Triangular Matrix.
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>j)
                cout<<0<<" ";
            else
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}
