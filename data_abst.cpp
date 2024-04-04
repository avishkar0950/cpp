#include<iostream>
using namespace std;
class abc
{
	private:
		int a,b;
		public:
			void put()
			{
				cout<<"enter the value of a&b";
				cin>>a>>b;
			}
			void disp()
			{
				cout<<a+b<<"\t";
			}
};
int main()
{
	abc a1;
	a1.put();
	a1.disp();
	return 0;
}
