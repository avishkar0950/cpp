#include<iostream>
using namespace std;
class abc
{
   public:
void add(int a,int b)
{
	cout<<"addition of a&b"<<a+b<<endl;
}
void add(int a,int b,int c)
{
	cout<<"addition of a,b&c"<<a+b+c<<endl;
}
void add(double a,double b)
{
	cout<<"addition of a,b"<<a+b<<endl;
}
};
int main()
{
	abc a1;
	a1.add(34,43);
	a1.add(22,33,44);
	a1.add(22.2,33.3);
	return 0;
}
