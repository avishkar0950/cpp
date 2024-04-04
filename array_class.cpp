#include<iostream>
using namespace std;
class stud
{
	public:
		int id;
		string name;
		void get()
		{
			cout<<"enter the ID and name of stud";
			cin>>id;
			cin>>name;
		}
		void disp()
		{
			cout<<id<<"\t"<<name;
		}
};
int main()
{
	stud s1[5];
	int i;
	cout<<"enter the details of 5 student"<<endl;
	for(i=0;i<5;i++)
	{
		s1[i].get();
	}
	cout<<"the details of 5 stud are"<<endl;
	for(i=0;i<5;i++)
	{
		s1.disp()
		cout<<endl;
	}
	return 0;
}
