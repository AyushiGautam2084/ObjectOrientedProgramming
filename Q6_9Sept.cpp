#include <iostream>

using namespace std;

class employee
{
    public:
    string emp_name;
    int emp_id;
    int salary;
};

class regular: public employee
{
    public:
    int DA;
    int HRA;
    int basic_sal;
    public:
    int total_sal()
    {
        salary=basic_sal+HRA+DA;
        return salary;
    }
};

class part_time: public employee
{
    public:
    int hours;
    int pay_per_hr;
    public:
    int total_pay()
    {
        salary=hours*pay_per_hr;
        return salary;
    }
};

int main()
{
    int i,j;
    regular r;
    part_time p;
    cout<<"1.Regular Employee\n2.Part time Employee";
    cout<<"Choose(1 or 2):";
    cin>>i;
    if(i==1)
    {
        cout<<"Enter name:";
        cin>>r.emp_name;
        cout<<"Enter employee ID:";
        cin>>r.emp_id;
        cout<<"Enter basic salary:";
        cin>>r.basic_sal;
        cout<<"Enter DA:";
        cin>>r.DA;
        cout<<"Enter HRA:";
        cin>>r.HRA;
        cout<<"Total salary:";
        j=r.total_sal();
        cout<<j;         
    }
    if(i==2)
    {
        cout<<"Enter name:";
        cin>>p.emp_name;
        cout<<"Enter employee ID:";
        cin>>p.emp_id;
        cout<<"Enter pay per hour:";
        cin>>p.pay_per_hr;
        cout<<"Enter hours:";
        cin>>p.hours;
        cout<<"Total salary:";
        j=p.total_pay();
        cout<<j;         
    }


    return 0;
}