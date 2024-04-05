//hierarchical 
#include<iostream>
using namespace std;
class a
{
	public:
		int x,y;
		void get()
		{
			cout<<"enter the value of x and y";
			cin>>x>>y;
		}
};
class b:public a
{
	public:
		void add()
		{
			cout<<x+y<<endl;
		}
};
class c:public a
{
	public:
		void sub()
		{
			cout<<x-y;
		}
};
int main()
{
	b b1;
	b1.get();
	b1.add();
	c c1;
	c1.get();
	c1.sub();
	return 0;
}
