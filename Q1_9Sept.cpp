#include <iostream>

using namespace std;

class A
{
    public:
    int a;
    public:
    void inputA()
    {
        cout<<"\nValue of a:";
        cin>>a;
        cout<<"\nThe values A is "<<a;
    }
};
class B: virtual public A
{
    public:
    int b;
    public:
    void inputB()
    {
        cout<<"\nValue of b:";
        cin>>b;
        cout<<"\nThe values B is "<<b;
    }
};
class C
{
    public:
    int c;
    public:
    void inputC()
    {
        cout<<"\nValue of C:";
        cin>>c;
        cout<<"\nThe values C is "<<c;
    }
};

class D: public A, public C
{
    public:
    int d;
    public:
    void inputD()
    {
        cout<<"\nValue of D:";
        cin>>d;
        cout<<"\nThe values D is "<<d;
    }
};
class E: public B
{
    public:
    int e;
    public:
    void inputE()
    {
        cout<<"\nValue of E:";
        cin>>e;
        cout<<"\nThe values E is "<<e;
    }
};
class F: public E, public C
{
    public:
    int f;
    public:
    void inputF()
    {
        cout<<"\nValue of F:";
        cin>>f;
        cout<<"\nThe values F is "<<f;
    }  
};
class G: virtual public A
{
    public:
    int g;
    public:
    void inputG()
    {
        cout<<"\nValue of G:";
        cin>>g;
        cout<<"\nThe values G is "<<g;
    }
};
class H: public B, public G
{
    public:
    int h;
    public:
    void inputH()
    {
        cout<<"\nValue of H:";
        cin>>h;
        cout<<"\nThe values H is "<<h;
    }
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;
    G g;
    H h;
    cout<<"Types of inheritance:\n";
    cout<<"1.Single inheritance:\n";
    b.inputA();
    b.inputB();
    cout<<"\n2.Hierarchial inheritance:\n";
    b.inputA();
    d.inputA();
    cout<<"\n3.Multilevel inheritance:\n";
    e.inputA();
    cout<<"\n4.Multiple inheritance:\n";
    d.inputA();
    d.inputC();
    cout<<"\n5.Hybrid inheritance:\n";
    f.inputC();
    f.inputA();
    cout<<"\n6.Multipath inheritance:\n";
    h.inputA();

    return 0;
}