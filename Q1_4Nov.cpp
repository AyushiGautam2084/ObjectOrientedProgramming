#include <iostream>
#include <conio.h>
using namespace std;

template <class t>
t display(t a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int Int[5]={0,8,6,9,1};
    float Float[5]={9.43,8.45,7.087,3.33,2.45};
    cout<<"\nPrinting the array...\n";
    display(Int);
    display(Float);
    return 0;

}
