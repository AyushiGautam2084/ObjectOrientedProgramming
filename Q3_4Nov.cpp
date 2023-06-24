#include <iostream>
#include <conio.h>
using namespace std;

template <class t>
class data
{
    public:
    data(){}
    display(t a[])
    {
        int i;
        cout<<"\nPrinting the array...\n";
        for(i=0;i<5;i++)
        {
            cout<<"\n"<<a[i]<<"\n";
        }
    }
};

int main()
{
    int Int[5]={0,8,6,9,1};
    float Float[5]={9.43,8.45,7.087,3.33,2.45};
    data<int> arr;
    data<float>arr2;
    arr.display(Int);
    arr2.display(Float);
    return 0;

}
