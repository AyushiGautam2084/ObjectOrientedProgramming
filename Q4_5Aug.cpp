#include <iostream>

using namespace std;

class pwr
{
    public:
    inline int sqr(int n)
    {
        return n*n;
    }
    inline int cube(int n)
    {
        return n*n*n;
    }
};
int main()
{
    int x,r;
    pwr p;
    cout<<"Enter a number:" ;
    cin>>x;
    r=p.sqr(x);
    cout<<"Square of "<<x<<" = "<<r<<endl;
    r=p.cube(x);
    cout<<"Cube of "<<x<<" = "<<r<<endl;
    return 0;
}