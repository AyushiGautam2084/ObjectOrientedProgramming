#include<iostream>
#include<string.h>
using namespace std;

class String
{
    public:  
    char str[20];
    public:
    void inputstring()
    {
        cout<<"Enter String:";
        cin>>str;
    }
    void display()
    {
        cout<<str;
    }
    String operator+(String x)  
    {
        String s;
        strcat(str,x.str);
        strcpy(s.str,str);
        return s;
    }
};
int main()
{
    String str1, str2, str3;

    str1.inputstring();
    str2.inputstring();

    cout<<"\n First String is:  ";
    str1.display();   

    cout<<"\n Second String is:  ";
    str2.display();  

    str3=str1+str2;        
    cout<<"\n\n Concatenated String is:  ";
    str3.display();

    return 0;
}