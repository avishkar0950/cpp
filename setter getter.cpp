#include<iostream>
using namespace std;
class value
{
	public:
		int sum;
		 int geta()
		 {
		 	return sum;
		 }
		 void seta(int a,int b,int c)
		 {
		 	sum=a+b+c;
		 }
};

int main()
{
	int a,b,c;
	cout<<"enter the value of a,b,c"<<endl;
	cin>>a>>b>>c;
	value s1;
	s1.seta(a,b,c);
    cout<<s1.geta();
	return 0;
}
