#include <iostream>

using namespace std;

class student
{
    public:
    char name[50];
    int roll_no;
    int marks[5];

};

int main()
{
    int a,b,c=0;
    float percent=0;
    int total=500;
    student std;
    printf("Entering Student details...\n");
    printf("Enter name:");
    cin>>std.name;
    printf("Enter roll number:");
    cin>>std.roll_no;

    for(a=0;a<5;a++)
    {
        std.marks[a]=0;
    }
    for(a=1;a<6;a++)
    {
        printf("Enter marks for %d subjects:",a);
        cin>>std.marks[a-1];
    }

    for(b=0;b<5;b++)
    {
        c=c+std.marks[b];
    }
    
    percent=(c*100)/total;

    printf("Calculating total marks and percentage...\n");
    printf("The total marks are %d",c);
    printf("\nThe total percentage is %.2f",percent);

    return 0;
    
}
