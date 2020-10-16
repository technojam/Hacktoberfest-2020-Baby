#include <iostream>
using namespace std;
class Money{
  int rupees,Paise;
  public:
  Money(){cin>>rupees>>Paise;}
  Money operator +(Money o){
  Money t;
    t.rupees=rupees+o.rupees;
    t.Paise=Paise+o.Paise;
    return t;
  }
  Money operator -(Money o){
  Money t;
    t.rupees=rupees-o.rupees;
    t.Paise=Paise-o.Paise;
    return t;
  }
  void display(){
  cout<<"Rs="<<rupees<<" and "<<Paise<<" Paise";
  }
};
int main() {
Money m1,m2,m3,m4,m5;
m4=m1+m2;
m5=m4-m3;
m5.display();
	return 0;
}
