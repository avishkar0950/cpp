#include<iostream>
using namespace std;
class stud
{
	public:
		int id;
		string name;
		stud(int i1,string n1)
		{
			this->id=i1;
			this->name=n1;
		}
		void disp()
		{
			cout<<id<<"\t"<<name<<endl;
		}
};

int main()

{
	int a;
	string n1;
	cout<<"enter the detials of student"<<endl;
	cin>>a>>n1;
	stud s1=stud(a,n1);
	s1.disp();
	return 0;
}
