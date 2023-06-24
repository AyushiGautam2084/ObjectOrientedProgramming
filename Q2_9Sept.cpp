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
};

int main()
{
    class test t1;
    int i;
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

    return 0;
}