#include <iostream>

using namespace std;

class Employee
{
    protected:
    string name;
    int id;
    double salary;
    public:
    virtual void display()=0;
};

class Regular: public Employee
{
    private:
    double DA;
    double HRA;
    double basic_salary;
    public:
    Regular()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"ID:";
        cin>>id;
        cout<<"Enter the values for DA HRA and basic salary:";
        cin>>DA>>HRA>>basic_salary;
    }
    void display()
    {
        cout<<"Name:"<<name<<"\nID:"<<id;
        cout<<"\nSalary of the Regular employee is "<<(DA+HRA+basic_salary)<<"\n";
    }
};

class PartTime: public Employee
{
    private:
        int number_of_hours;
        double pay_per_hour;
    public:
        PartTime()
        {
            cout<<"Enter name:";
            cin>>name;
            cout<<"ID:";
            cin>>id;
            cout<<"\nEnter the number of hours:";
            cin>>number_of_hours;
            cout<<"Enter the pay per hour:";
            cin>>pay_per_hour;
        }
        void display()
        {
            cout<<"Name:"<<name<<"\nID:"<<id<<endl;
            cout<<"\nSalary of the part-time employee is "<<(number_of_hours*pay_per_hour);
        }
};

int main()
{
    Regular r;
    r.display();
    
    PartTime p;
    p.display();
    return 0;
}