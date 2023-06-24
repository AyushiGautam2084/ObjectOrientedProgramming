#include<iostream>
#include <conio.h>

using namespace std;

template <class t>
t display(t a, t b)
{
    cout<<a<<"\n"<<b;
    
}
int main()
{
    cout<<"\nPrinting the values\n";
    display(5,'A');
    return 0;

}
