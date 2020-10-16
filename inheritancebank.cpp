#include <iostream>
using namespace std;
class Customer{
public:
  string name;
  int id;
  void details(){cin>>name>>id;}
};
class Bank{
public:
  int no,bal,interest;
  void bank(){
    cin>>no>>bal;
    interest=bal*36/100;         }
};
class Account:public Customer,public Bank{
public:
  void show(){cout<<"Customer Name="<<name<<endl<<"Customer Id="<<id<<endl<<"Account No="<<no<<endl<<"Account Balance="<<bal<<endl<<"Interest="<<interest;}
};
int main() {
	Account a;
  a.details();
  a.bank();
  a.show();
	return 0;
}
