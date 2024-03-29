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
		void add()
		{
			cout<<a+b;
		}
};
int main()
{
	int a,b;
	cout<<"enter the value of a&b";
	cin>>a>>b;
	abc a1=abc(a,b);
	a1.add();
	return 0;
}
