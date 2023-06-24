/*#include <iostream>

using namespace std;

class Employee
{
    protected:
    string name;
    int acc_no;
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
}*/

#include <iostream>


using namespace std;


class Account{
    //abstract base class
    protected:
        int account_number;
        string customer_name; 
        double balance=0.0;
    public:
        void deposit(){
            int amount;
            cout<<"\nEnter amount to deposit: ";
            cin>>amount;
            balance=balance+amount;
        }
        virtual void withdraw()
        {
            ;
        }
        virtual void display(){;}
        
};


class Savings: public Account
{
    private:
        double min_balance=500;
    
    public:    
        void withdraw(){
            int amount;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount;
            if (amount<min_balance)
                cout<<"The minimum amount that can be withdrawn is "<<min_balance;
                
            else
                balance=balance-amount;
        }
        void display(){
            cout<<"\nBalance= "<<balance;
        }
    
};


class Current: public Account{
    private:
        double over_due_amount=500000;
        
    public:    
        void withdraw(){
            int amount;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount;
            if (amount>over_due_amount)
                cout<<"\nThe maximum amount that can be withdrawn is "<<over_due_amount;
                
            else
                balance=balance-amount;
        }
        void display(){
            cout<<"\nBalance= "<<balance;
        }
        
};


int main()
{
    Savings s;
    s.deposit();
    s.withdraw();
    s.display();
    
    Current c;
    c.deposit();
    c.withdraw(); 
    c.display();
    
    
    return 0;
}