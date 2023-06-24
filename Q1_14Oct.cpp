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

class B
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

class C: public A,public B
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

int main()
{
    C c;
    return 0;
}
