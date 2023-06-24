#include <iostream>

using namespace std;

int increase(int a)
{
    a++;
    cout<<a;
    return 0;
}

int main()
{
    int i;
    cout<<"Enter a number:";
    cin>>i;
    cout<<"The increment of the given number is ";
    increase(i);
    return 0;
}