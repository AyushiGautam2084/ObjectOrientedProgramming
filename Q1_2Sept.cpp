#include <iostream>

using namespace std;

class num
{
    private:
    int real;
    int imag;

    public:
    num(void);
    num(int r, int i)
    {
        real=r;
        imag=i;
        cout<<"\nThe complex number is "<<real<<"+"<<imag<<"i";
    }
    num(num &comp)
    {
        real=comp.real;
        imag=comp.imag;
        cout<<"\nThe complex number is "<<real<<"+"<<imag<<"i";   
    }
    ~num() 
    {
        cout<<"\nDestructor called";
    }
    
};

int main()
{
    int i,j;
    char k='a';
    cout<<"Enter the numbers:";
    cin>>i>>j;
    num a();
    num b(i,j);
    num c(b);
    return 0;
}