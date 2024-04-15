#include<iostream>
using namespace std;
class abc
{
	public:
		void add(int a,int b)
		{
		cout<<"addition of two int nos "<<a+b<<endl;
}
void add(double a,double b)
{
	cout<<"addition of two float nos"<<a+b;
}
};
int main()
{
	abc a1;
	a1.add(12,13);
	a1.add(12.2,13.2);
	return 0;
}
