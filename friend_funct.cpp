#include<iostream>
using namespace std;
class abc
{
	private:
		int a=0;
		public:
			abc()
			{
				
			}
			friend int print(abc);
};
int print(abc a1)
{
	a1.a+=10;
	return a1.a;
	
}
int main()
{
	abc a12;
	cout<<print(a12);
	return 0;
}
