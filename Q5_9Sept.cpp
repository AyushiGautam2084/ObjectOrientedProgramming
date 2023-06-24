#include <iostream>

using namespace std;

class shape
{
    public:
    int l;
    int b;
    int r;
    int bs;
    int h;
};

class circle : public shape
{
    public:
    float area;
    public:
    void CirArea()
    {
        area=3.14*r*r;
        cout<<"\nThe area of circle is "<<area;
    }
};
class triangle : public shape
{
    public:
    float area;
    public:
    void TriArea()
    {
        area=0.5*bs*h;
        cout<<"\nThe area of triangle is "<<area;
    }
};

class rectangle : public shape
{
    public:
    float area;
    public:
    void RecArea()
    {
        area=l*b;
        cout<<"\nThe area of rectangle is "<<area;
    }
};

int main()
{
    class rectangle rec;
    class triangle t;
    class circle c;
    cout<<"Enter length and breadth:";
    cin>>rec.l>>rec.b;
    cout<<"Enter radius for circle:";
    cin>>c.r;
    cout<<"Enter base and height for triangle:";
    cin>>t.bs>>t.h;
    cout<<"\n\n";
    cout<<"Printing the area...\n";
    rec.RecArea();
    t.TriArea();
    c.CirArea();

    return 0;
}
