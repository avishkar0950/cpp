//call by value
#include<iostream>
using namespace std;
void swap(int a,int b)
{
	 int t;
	 t=a;
	 a=b;
	 b=t;
	 cout<<"a= "<<a<<" b= "<<b;
}
int main()
{
	int a1,b1;
	cout<<"enter the value of a1 and b1"<<endl;
	cin>>a1;
	cin>>b1;
	swap(a1,b1);
	return 0;
	
}
