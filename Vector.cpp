// C++ program to illustrate the 
// iterators in vector 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> vec; 

	for (int i = 1; i <= 5; i++) 
		vec.push_back(i); 

	cout << "Output of begin and end: "; 
	for (auto i = vec.begin(); i != vec.end(); ++i) 
		cout << *i << " "; 

	cout << "\nOutput of cbegin and cend: "; 
	for (auto i = vec.cbegin(); i != vec.cend(); ++i) 
		cout << *i << " "; 

	cout << "\nOutput of rbegin and rend: "; 
	for (auto ir = vec.rbegin(); ir != vec.rend(); ++ir) 
		cout << *ir << " "; 

	cout << "\nOutput of crbegin and crend : "; 
	for (auto ir = vec.crbegin(); ir != vec.crend(); ++ir) 
		cout << *ir << " "; 

	return 0; 
} 
