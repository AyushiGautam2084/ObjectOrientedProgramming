#include <iostream>

using namespace std;

class school
{
    private:
        string name;
        int roll_no;

    public:
        int marks[5];
        void getdeets(int n)
        {
            int i;
            for(i=0;i<n;i++)
            {
                cout<<"Entering student details...\n";
                cout<<"Name:";
                cin>>name;
                cout<<"Roll number:";
                cin>>roll_no;
                cout<<"Total marks:";
                cin>>marks[i];
            }
        }
};

void AvgMarks(school s1, int n)
{
    s1.getdeets(n);
    int sum = 0, i,avg;
    for(i=0;i<n;i++)
    {
        sum=sum+s1.marks[i];
    }
    avg=sum/n;
    cout<<"The average is "<<avg<<endl;
}

int main()
{
    school s;
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    AvgMarks(s,n);

    return 0;
}