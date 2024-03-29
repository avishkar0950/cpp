//constructor-default
#include<iostream>
using namespace std;
class stud
{
	public:
		int a,b;
		stud()
		{
			cout<<"enter the value of a and b";
			cin>>a>>b;
	
		}
		void add()
		{
			cout<<"addition is "<<a+b;
		}
};
int main()
{
	stud s1=stud();
	s1.add();
	return 0;
}
