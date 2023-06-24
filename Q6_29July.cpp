#include <iostream>
using namespace std;

class employee
{
    private:
	char name[50];
	int age;
	int id;
	int basic,DA,HRA;
	float gross;
	public:
		void values()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter ID: ";
			cin>>id;
			cout<<"Enter Age: ";
			cin>>age;
			cout<<"Enter Basic salary: ";
			cin>>basic;	
		
			DA=0.8*basic;
			HRA=0.1*basic;
			gross=basic+DA+HRA;
		
		}
		void showVal()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Basic salary = "<<basic<<endl;
			cout<<"Gross salary = "<<gross<<endl;
		}	
};



int main()
{
	int n=0;
	cout<<"Enter number of employee: ";
	cin>>n;
	employee e[n];
    printf("Entering employee details...\n");
	for(int i=0; i<n; i++)
	{
		e[i].values();		
	}
	cout<<"Employee Information:\n"<<endl;

	for(int i=0; i<n; i++)
	{
		e[i].showVal();
	}
	return 0;
}