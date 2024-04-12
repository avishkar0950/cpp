#include<iostream>
using namespace std;
class father
{
	public:
		int property_fat;
		int t_property;
void get()
{
	cout<<"enter the total father property"<<endl;
	cin>>t_property;
}
			void passmyproperty()
			{
				char choice;
				cout<<"do you want pass the proprty pass to son :";
				cin>>choice;
				if(choice =='y'||choice =='Y')
				property_fat=t_property;
				else
				property_fat=0;
			}
			
};
class son:public father
{
	public:
		int sons_self_property;
		int sons_t_property;
		void set()
		{
			cout<<"enter the  sons self propert"<<endl;
			cin>>sons_self_property;
		    sons_t_property=sons_self_property+property_fat;
		}
		void total_s_prop()
		{
			cout<<"sons total property";
			cout<<sons_t_property;
		}
}; 

int main()
{
	son s1;
	s1.get();
	s1.passmyproperty();
	s1.set();
	s1.total_s_prop();
	}
