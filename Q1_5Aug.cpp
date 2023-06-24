#include <iostream>

using namespace std;

int area(int,int);

float area(float);

float area(float,float);

int main()
{
    int l,b;
    float r,bs,h;
    cout<<"Enter the length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Enter the base and height of triangle:";
    cin>>bs>>h;
    cout<<"\nArea of rectangle is "<<area(l,b);
    cout<<"\nArea of circle is "<<area(r);
    cout<<"\nArea of triangle is "<<area(bs,h);

    return 0;
}

int area(int l,int b)
{
    return(l*b);
}

float area(float r)
{
    return(3.14*r*r);
}

float area(float b,float h)
{
    return((b*h)/2);
}