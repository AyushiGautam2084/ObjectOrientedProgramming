#include <iostream>
using namespace std;

int passbyref(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a,b;
    cout<<"Enter the numbers:";
    cin>>a>>b;
    passbyref(a,b);
    cout<<"Swapping using pass by reference: ";
    cout<<a<<" and "<<b<<endl;

    return 0;
}