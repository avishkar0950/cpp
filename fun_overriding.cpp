#include<iostream>
using namespace std;
class base
{
	public:
		virtual void disp()
		{
			cout<<"base class";
		}
};
class derive:public base 
{
	public:
		void disp()
		{
			cout<<"derive class";
		}
};
int main()
{
	derive d1;
	d1.disp();
	d1.disp();
	return 0;
}
