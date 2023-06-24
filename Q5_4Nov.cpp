#include <iostream>

using namespace std;

int main()
{
    int i,j;
    float k;
    cout<<"Enter numerator:";
    cin>>i;
    cout<<"Enter denominator:";
    cin>>j;
    try
    {
        if(j!=0)
        {
            k=i/j;
            cout<<"Answer:"<<k;
        }
        else
        { 
            throw(j);
        }
    }
    catch(int x)
    {
        cout<<"Divison by zero is not possible.";
    }
    
}