#include<bits/stdc++.h>
int sum(int a, int b)  
{ 
    int s = a ^ b; 
    int carry = a & b; 
  
    if (carry == 0) return s; 
    else return sum(s, carry << 1); 
}
int main()
{
    int a,b;
    std::cin>>a>>b;
    std::cout<<sum(a,b);

}