#include<iostream>
using namespace std;
class stud
{
	public:
		int a,b;
		void seta(int a1)
		{
			a=a1;
		}
		void setb(int b1)
		{
			b=b1;
		}
		int geta()
		{
			return a;
		}
		int getb()
		{
			return b;
		}
};
int main()
{
	int a,b;
	cout<<"enter the value of a&b";
	cin>>a;
	cin>>b;
	stud s1;
	s1.seta(a);
	s1.setb(b);
	cout<<s1.geta()<<s1.getb();
	return 0;
}
