#include <iostream>

using namespace std;

class values
{
    private:
        int i;
        static int takeVal;
        static int giveVal;
    public:
        void input();
        void output();
        void show();
};

int values::takeVal=0;
int values::giveVal=0;

void values::input()
{
    cout<<"Enter a number:";
    cin>>i;
    takeVal++;
}

void values::output()
{
    cout<<"The given number is "<<i<<endl;
    giveVal++;
}

void values::show()
{
    cout<<"The input function was called "<<takeVal<<" times\n";
    cout<<"The output function was called "<<giveVal<<" times\n";
}

int main()
{
    values a;
    int i,j;
    cout<<"How many number to enter?";
    cin>>j;
    for(i=0;i<j;i++)
    {
        a.input();
        a.output();
    }

    a.show();
    return 0;
}