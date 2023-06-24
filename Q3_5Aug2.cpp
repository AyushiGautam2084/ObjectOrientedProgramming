#include <iostream>
#include <stdio.h>

using namespace std;

int rep(int a = 80, char b = '*')
{
    int i;
    for(i=0;i<a;i++)
    {
        cout<<b;
    }
}

int main()
{
    int a;
    char b;
    cout<<"Enter a character:";
    cin>>b;
    //getchar();
    cout<<"Enter the number of times to repeat:";
    cin>>a;
    rep(a,b);
    return 0;
}