#include<iostream>
using namespace std;

int main(){

 int X;
cin>> X;
int arr[X]; 
for (int i=0;i<X; i++){
    cin>>arr[i];
}
for (int i=X-1;i>=0; i--){
    cout<<arr[i]<<" ";
}
return 0;
}
