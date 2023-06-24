#include <iostream>
using namespace std;
class Strings
{
    private:
    string str;
    int length;
    public:
    Strings(){}
    Strings (string s )
    {
        str=s;
    }
    Strings(Strings &s)
    {
        str=s.str;
    }
    void concat(string s1)
    {
        string s2=str+s1;
        length = s2.size();
        cout<<"\nThe concatenated string is "<<s2;
        cout<<"\nThe length is "<<length;
    }
};
int main()
{
    string a,b;
    cout<<"Enter a string:";
    cin>>a;
    cout<<"Enter another string:";
    cin>>b;
    Strings s(a);
    Strings s1(s);
    s.concat(b);
    s1.concat(b);
    return 0;
}