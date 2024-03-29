//copy copnstructor
#include<iostream>
using namespace std;
class abc
{
	public:
	int a,b;
	abc(int a1,int b1)
	{
		a=a1;
		b=b1;
	}
	abc(abc &a1)
	{
		a=a1.a;
		b=a1.b;
	}
	void disp()
	{
		cout<<a<<"\t"<<b;
		}	
};
int main()
{
	abc ab(10,50);
	abc ab1(ab);
	ab1.disp();
	return 0;
}
