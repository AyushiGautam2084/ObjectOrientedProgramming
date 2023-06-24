#include <iostream>
#include <conio.h>

using namespace std;

class number
{
    private:
    static int c;

    public:
    void count()
    {
        ++c;
        cout<<"\n C = "<<c;
    }
};
int number :: c=0;

int main()
{
    number a,b,c;
    a.count();
    b.count();
    c.count();
    return 0;
}