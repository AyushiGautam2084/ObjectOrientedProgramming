#include<iostream>
using namespace std;
class shape 
{
    //abstract base class
    protected:
    float d1,d2;
    public:
    void getdim(){
        cin>>d1>>d2;
    }
    virtual float area()=0;
    virtual void print()=0;
};
class triangle:public shape
{
    public:
    triangle(float f1,float f2)
    {
        d1 =f1; d2 =f2;
    }
    float area(){
        return 0.5*d1*d2;
    }
    void print(){ cout<<"Area of triangle is "<<area()<<endl; }
};
class rectangle: public shape {
    public:
    rectangle(float f1,float f2){ d1=f1;d2=f2;}
    float area(){ return d1*d2; }
    void print(){ cout<<"Area of rectangle is "<<area()<<endl; }
};
int main(){
    shape* t = new triangle(10.0,20.0);
    //cout<<"\n enter triangle base and height "<<endl;
    //t->getdim();
    //cout<<"\n area="<<t.area()<<endl;
    t->print();
    delete t;
    t = new rectangle(10.0,20.0);
    t->print();
    delete t;
    
    return 0;

}