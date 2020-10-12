/*
Find All Indexes Of a Number In a array :
Given an array arr of size N and an integer X. The task is to find all the indices of the integer X in the array.

example:  input-  6
                  2 4 5 1 3 2
                  2
          output- 0 5
        
        Here is my simple recursive approach for finding all indexes of a number :) 
*/

#include <iostream>
using namespace std;

int all_indexes(int* arr,int n,int x,int* output){
    // Base case
    if(n==0){
        return 0;
    }
    //Recursive call
    int size=all_indexes(arr+1,n-1,x,output);
    //Small calculaton
    if(arr[0]==x){
        for(int i=size;i>=0;i--){
            output[i]=output[i-1] + 1;   //if arr[0] element match with given element x then we do first shifting right elements of output and add one to it 
        }
        output[0]=0;                     // after shifting and adding plus one put 0 index at zero position of output
        return size+1;
    }
    for(int i=0;i<size;i++){             // if arr[0] does not match with given element x then simply add plus one of output elements for getting correct indexes w.r.t original input array
        output[i]=output[i]+1;
    }
    return size;
}

int main() {
    int n;
    cin>>n;
    int* arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int* output=new int[n];
    int x;
    cin>>x;
    int size=all_indexes(arr,n,x,output);  // this function returns the size of output array which contains all indexes in given input array
    for(int i=0;i<size;i++){
        cout<<output[i]<<" ";
    }
        
}