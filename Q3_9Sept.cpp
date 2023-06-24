#include <iostream>

using namespace std;

class Student
{
    public:
    string name;
    int roll_no;
    int age;
};

class test : public Student
{
    public:
    int marks[5];
    int total_marks;
    public:
    int total()
    {
        int i,j=0;
        for(i=0;i<5;i++)
        {
            j=j+marks[i];
        }
        total_marks = j;
        return j;
    }
    void percent()
    {
        float i;
        float k = 0;
        i=(total_marks/float(500));
        k=i*100;
        cout<<k;

    }
};

int main()
{
    class test t1;
    int i,j;
    float k;
    cout<<"Enter name:";
    cin>>t1.name;
    cout<<"Enter roll number:";
    cin>>t1.roll_no;
    cout<<"Enter Age:";
    cin>>t1.age;
    cout<<"Enter Marks for 5 subjects:";
    for(i=0;i<5;i++)
    {
        cin>>t1.marks[i];
    }
    cout<<"\n\n";
    cout<<"Printing details...\n";
    cout<<"\nName:";
    cout<<t1.name;
    cout<<"\nRoll number:";
    cout<<t1.roll_no;
    cout<<"\nAge:";
    cout<<t1.age;
    cout<<"\nMarks in 5 subjects:";
    for(i=0;i<5;i++)
    {
        cout<<t1.marks[i]<<"  ";

    }
    j=t1.total();
    cout<<"\nTotal marks:"<<j;
    cout<<"\nPercentage:";
    t1.percent();

    return 0;
}