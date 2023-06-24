#include <iostream>

using namespace std;

class student
{
    public:
    char name[50];
    int roll_no;
    int total_marks;

};
 
int main()
{
    student std;
    printf("Enter name:");
    cin>>std.name;
    printf("Enter roll number:");
    cin>>std.roll_no;
    printf("Enter Total marks:");
    cin>>std.total_marks;
    printf("So the details are:\n");
    printf("Name:");
    cout<<std.name;
    printf("\nRoll number:");
    cout<<std.roll_no;
    printf("\nTotal marks:");
    cout<<std.total_marks;

    return 0;

}
