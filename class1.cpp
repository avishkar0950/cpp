#include<iostream>
using namespace std;
class stud
{
	public:
		int a,b;
		void get()
		{
			cout<<"enter the value of a&b";
			cin>>a>>b;
		}
		void add()
		{
			cout<<a+b;
		}
};
int main()
{
	stud s1;
	s1.get();
	s1.add();
	return 0;
}
