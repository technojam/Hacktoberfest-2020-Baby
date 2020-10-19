#include <iostream>
using namespace std; 
int binarySearch(int arr[], int l, int r, int x) 
{ 
	while (l <= r) { 
		int m = l + (r - l) / 2; 
		if (arr[m] == x) 
			return m; 
		if (arr[m] < x) 
			l = m + 1; 
		else
			r = m - 1; 
	} 
	return -1; 
} 
int main(void) 
{   
    int arr[25],n,x;
	cout<<"Enter size of an array: ";
    cin>>n;
    cout<<"Enter Array In a Sorted Way!! ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    cout<<"Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	cout<<"\nEnter the Element to be found: ";
    cin>>x;
	int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? cout << "Element is not found in array"
				: cout << "Element found at index " << result; 
	return 0; 
} 
