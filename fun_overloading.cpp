#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"addition of two nos"<<a+b<<endl;
}
void add(int a,int b,int c)
{
	cout<<"addition of three nos"<<a+b+c<<endl;
}
void add(float a,float b)
{
	cout<<"addition of two float no."<<a+b<<endl;
}
int main()
{
	int a,b,c;
	float a1,b1;
	cout<<"enter the value of a&b";
	cin>>a>>b>>c;
	cout<<"enter the value of a1&b1";
	cin>>a1>>b1;
	add(a,b);
	add(a,b,c);
	add(a1,b1);
	return 0;
}
