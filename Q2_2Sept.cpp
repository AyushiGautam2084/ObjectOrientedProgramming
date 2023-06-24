#include <iostream>
using namespace std;
class minHour 
{
    private:
    int hours, mins;
    public:
    minHour(){}
    minHour() : hours(12), mins(0) {}
    minHour(int h, int m ) : hours(h), mins(m) {}
    minHour(minHour &time)
    {
        hours=time.hours;
        mins=time.mins;
    }
    void show() 
    {
        cout <<"\nThe time entered is " <<hours << ":" << mins;
    }
};
int main() 
{
    int a,b;
    cout<<"Enter time:";
    cin>>a>>b;
    minHour time1;
    minHour time2(a,b);
    minHour time3(time2);
    time1.show();
    time2.show();
    time3.show();
    return 0;
}