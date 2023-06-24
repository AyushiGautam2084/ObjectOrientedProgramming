#include <iostream>

using namespace std;

class dist
{
    float feet;
    float inch;
    public:
    dist( )
    {
        feet=inch=0.0;
    }
    dist (float feet, float inch)
    {
        this->feet=feet;
        this->inch=inch;
    }
    bool operator > (dist d2);
    bool operator==(dist d2);
    dist operator + (dist d2);
    void display()
    {
        cout<<"feet:"<<feet<<"  inches:"<<inch<<"\n";
    }
};
dist dist:: operator+(dist d2)
{
 	dist d;
 	d.feet= feet + d2.feet;
    d.inch=inch+d2.inch;
 	return d;
}

bool dist:: operator >(dist d2)
{ 
    float t1, t2;
    t1= feet + inch/12.0;
    t2= d2.feet + d2.inch/12.0;
    return (t1>t2)? true : false;
}
bool dist:: operator==(dist d2)
{
    if(feet == d2.feet && inch == d2.inch)
        return true;
    else
        return false;
}
int main()
{
    dist d1(5,7.5), d2(6.44,11.34), d3(5,7.5),d4;
    cout<<"The given distances:\n";
    d1.display();
    cout<<"\n";
    d2.display();
    cout<<"\nComparing the distances but overloading > operator...\n";
    if (d1 > d2)
        cout<<"d1 > d2\n";
    else
        cout<<"d2 > d1\n";

    cout<<"\nChecking for equality by overloading == operator...\n";
    if (d1 == d3)
        cout<<"They are equal\n";
    else
        cout<<"The are not equal\n";
    return 0;

}
