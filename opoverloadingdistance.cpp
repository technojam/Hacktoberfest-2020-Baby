#include <iostream>
using namespace std;
class Distance{
int feet,inch;
  public:
  void readDistance(void){
  cin>>feet;
    cin>>inch;  
  }
  void dispDistance(){cout<<"Feet:"<<feet<<" Inches:"<<inch<<endl;}
  Distance operator +(Distance &m){
  Distance a;
    a.inch=inch+m.inch;
    a.feet=feet+m.feet+(a.inch/12);
    a.inch=a.inch%12;
    return a;
  }
};
int main() {
	Distance b,c,d;
  b.readDistance();
  c.readDistance();
  d=b+c;
  d.dispDistance();
	return 0;
}
