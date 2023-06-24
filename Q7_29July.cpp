#include<iostream>
#include<math.h>
using namespace std;


class Dis
{
    int a,b,c,d;
    public:
    void values()
    {
        cout<<"\n Enter the  value of (X1,X2) and (Y1,Y2):";
        cin>>a>>b>>c>>d;
    }
    void showDis()
    {
        int k;
        float l;
        k=( pow(c-a,2)  +   pow(d-b,2)  );
        l=pow(k,0.5);   
        cout<<"\n Distance between point(X1,Y1) and (X2,Y2) is: "<<l << "\n\n";
    }
};

int main()
{
   
    Dis meter;
    meter.values();
    meter.showDis();

    return 0;
}