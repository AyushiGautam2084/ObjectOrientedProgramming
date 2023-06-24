#include <iostream>

using namespace std;

int vol(int,int,int);

float vol(float);

float vol(float,float);

int main()

{
    int l,b,h;
    float r,rd,ht;
    cout<<"Enter the length, breadth and height of cuboid:";
    cin>>l>>b>>h;
    cout<<"Enter radius of sphere:";
    cin>>r;
    cout<<"Enter the radius and height of cylinder:";
    cin>>rd>>ht;
    cout<<"\nVolume of cuboid is "<<vol(l,b,h);
    cout<<"\nVolume of sphere is "<<vol(r);
    cout<<"\nVolume of cylinder is "<<vol(rd,ht);
}


int vol(int l,int b,int h)
{

    return(l*b*h);

}

float vol(float r)
{

    return((4*3.14*r*r*r)/3);

}

float vol(float r,float h)
{

    return(3.14*r*r*h);

}