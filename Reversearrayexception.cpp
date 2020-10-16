#include <iostream>
using namespace std;
int main() {
	int n;
  cin>>n;
  try{
  if(n>0 && n<=20) {
  int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    for(int i=n-1;i>0;i--)
      cout<<arr[i]<<" ";
    cout<<arr[0];
  }
    else
      throw(n);
  }
  catch(int a){
  cout<<"Exception occurred";
  }
	return 0;
}
