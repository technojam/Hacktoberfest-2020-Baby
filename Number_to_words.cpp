#include <iostream> 
using namespace std; 
  
 
string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen " }; 
  
string ten[] = { "", "", "twenty ", "thirty ", "forty ", 
                 "fifty ", "sixty ", "seventy ", "eighty ", 
                 "ninety " }; 
  
string numToWords(int n, string s) 
{ 
    string str = ""; 
    
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
  
    
    if (n) 
        str += s; 
  
    return str; 
} 
  
 
string convertToWords(long n) 
{ 
    string output; 
    output += numToWords((n / 10000000), "crore "); 
    output += numToWords(((n / 100000) % 100), "lakh "); 
    output += numToWords(((n / 1000) % 100), "thousand "); 
    output += numToWords(((n / 100) % 10), "hundred "); 
  
    if (n > 100 && n % 100) 
        output += "and "; 
    output += numToWords((n % 100), ""); 
  
    return output; 
} 
  

int main() 
{ 
    long int  n;
    cout<<"Enter the number\n";
    cin>>n;
    cout << convertToWords(n) << endl; 
  
    return 0; 
} 
