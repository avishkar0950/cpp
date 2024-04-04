#include<iostream>
using namespace std;
class a
{
	public:
		int x,y;
		void get()
		{
			cout<<"enter the values of x&y";
			cin>>x>>y;
		}
};
class b:public a
{
	public:
		void add()
		{
			cout<<"adition is ="<<x+y;
		}
};
class c:public a
{
	public:
         float pie=3.141;
};
class d:public c
{
	public:
		void area()
		{
			cout<<"area of circle="<<pie*x*x;
		}
};
int main()
{
	b b1;
	b1.get();
	b1.add();
	d d1;
	d1.get();
	d1.area();
}
