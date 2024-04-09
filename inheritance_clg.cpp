#include<iostream>
using namespace std;
class father
{
	public:
		int property;
		int self;
void get()
{
	cout<<"enter the property"<<endl;
	cin>>property;
	cout<<"enter the self property"<<endl;
	cin>>self;
}
			void total()
			{
				cout<<"totalprperty of father "<<property+self<<endl;
			}
};
class son:public father
{
	public:
		int sons_self_property;
		void set()
		{
			cout<<"enter the self propert"<<endl;
			cin>>sons_self_property;
		}
		void put()
		{
		    cout<<"sons property"<<property+self+sons_self_property;
		}
};
int main()
{
		son s1;
		s1.get();
		s1.total();
		s1.set();
		s1.put();
		return 0;
	}

