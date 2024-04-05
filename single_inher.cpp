//inheritance
//single
#include<iostream>
using namespace std;
class a
{
	public:
	int a1,b1;
	void get()
	{
		cout<<"enter the value of a and b";
		cin>>a1>>b1;
	}

};
class b:public a
{
	public:
		void put()
	{
		cout<<a1+b1;
	}	
};
int main()
{
	b b1;
	b1.get();
	b1.put();
	return 0;
}
