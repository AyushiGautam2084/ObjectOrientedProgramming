#include <iostream>

using namespace std;

int rep(int,char);

int rep(void);

float rep(char);

int main()
{
    int a,i;
    char b;
    cout<<"Enter a character:";
    cin>>b;
    cout<<"Enter the number of times to repeat:";
    cin>>a;
    if(a == '\0')
    {
        rep(b);
    }
    if(a == '\0' && b == '\0')
    {
        rep();
    }
    else
    {
        rep(a,b);
    }

    return 0;
}

int rep(int a, char b)
{
    int i;
    for(i=0;i<a;i++)
    {
        cout<<b;
    }
}

int rep(void)
{
    int i;
    for(i=0;i<80;i++)
    {
        cout<<"*";
    }
}

float rep(char b)
{
    int i;
    for(i=0;i<80;i++)
    {
        cout<<b;
    }
}