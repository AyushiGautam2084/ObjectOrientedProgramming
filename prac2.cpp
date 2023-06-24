#include <iostream>
#include <conio.h>

using namespace std;

class number
{
    private:
    static int c;
    int k;

    public:
    void zero()
    {
        k=0;
    }
    void count()
    {
        ++c;
        ++k;
        cout<<"\nThe value of C is "<<c<<" Adress of C is "<<(unsigned)c;
        cout<<"\nThe value of k is "<<k<<" Adress of k is "<<(unsigned)k;
    }
};

int number :: c=0;

int main()
{
    number a,b,c;
    a.zero();
    b.zero();
    c.zero();
    a.count();
    b.count();
    c.count();
    return 0;
}
