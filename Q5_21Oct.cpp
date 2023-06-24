#include <iostream>

using namespace std;

class time
{
    public:
    int hours;
    int min;
    public:
    time(void){}
    time(int hours, int min)
    {
        this->hours=hours;
        this->min=min;
    }
    void display()
    {
        cout<<hours<<":"<<min;
    }
    int operator == (time t1)
    {
        time t;
        if(t1.hours==hours && t1.min==min)
        {
            return 1;
        }
        else
        {
           return  2;
        }
    }
};

int main()
{
    time t1(1,20);
    time t2(2,30);
    cout<<"The given time is:\n";
    t1.display();
    cout<<"\n";
    t2.display();
    if((t1==t2)==1)
    {
        cout<<"\nThe time is same";
    }
    else
    {
        cout<<"\nThe time is not the same";
    }
    return 0;

}