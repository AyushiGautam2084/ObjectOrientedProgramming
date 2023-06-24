#include <iostream>
#include <string>

using namespace std;
class complex
{
    private:
    int real[10];
    int imag[10];
    public:
    int values()
    {
        int a;
        for(a=0;a<10;a++)
        {
            cout<<"Enter real part: ";
            cin>>real[a];
            cout<<"Enter imaginary part:";
            cin>>imag[a];
        }
        return 0;
    }
    int showVal()
    {
        int b;
        for(b=0;b<10;b++)
        {
            cout<<real[b]<<"+"<<imag[b]<<"i"<<endl;
        }

        return 0;
    }
};
int main()
{
    complex obj;
    obj.values();
    obj.showVal();

    return 0;
}