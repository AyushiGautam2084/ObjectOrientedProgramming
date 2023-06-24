#include <iostream>

using namespace std;

class A
{
    public:
    A(void)
    {
        cout<<"\nConstructor A called";
    }
    ~A(void)
    {
        cout<<"\nDestructor A called";
    }
};

class B:virtual public A
{
    public:
    B()
    {
        cout<<"\nConstructor B called";
    }
    ~B(void)
    {
        cout<<"\nDestructor B called";
    }
};

class C:virtual public A
{
    public:
    C()
    {
        cout<<"\nConstructor C called";
    }
    ~C(void)
    {
        cout<<"\nDestructor C called";
    }
};
class D:public C, public B
{
    public:
    D()
    {
        cout<<"\nConstructor D called";
    }
    ~D(void)
    {
        cout<<"\nDestructor D called";
    }
};

int main()
{
    D d;
    return 0;
}


