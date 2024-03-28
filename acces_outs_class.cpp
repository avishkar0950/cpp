//class and object
#include<iostream>
using namespace std;
class stud
{
	public:
		int a,b;
		void get();
		void add();
};
void stud::get()
{
	cout<<"enter the value ofd a and b";
	cin>>a>>b;
}
void stud::add()
{
	cout<<a+b;
}
int main()
{
	stud s1;
	s1.get();
	s1.add();	
	return 0;
}
