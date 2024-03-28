#include<iostream>
using namespace std;
int add();
int main()
{
	cout<<add();
	return 0;
}
int add()
{
	int a,b;
	cout<<"enter the values";
	cin>>a>>b;
	return a+b;
}
