#include <stdio.h>

struct SCHOOL
{
    char name[30];
    int roll_no;
    int Phy;
    int Chem;
    int Maths;
    int Eng;
    int Prog;
};

int main()
{
    struct SCHOOL s1[5];
    int a,j,c;
    for(a=0;a<5;a++)
    {
        printf("Enter name:");
        scanf("%s",s1[a].name);
        printf("Enter roll number:");
        scanf("%d",&s1[a].roll_no);
        printf("Enter Physics marks:");
        scanf("%d",&s1[a].Phy);
        printf("Enter Chemistry marks:");
        scanf("%d",&s1[a].Chem);
        printf("Enter Maths marks:");
        scanf("%d",&s1[a].Maths);
        printf("Enter English marks:");
        scanf("%d",&s1[a].Eng);
        printf("Enter Programming marks:");
        scanf("%d",&s1[a].Prog);
    }
    printf("The data is\n");
    for(j=0;j<5;j++)
    {
        printf("%s\t",s1[j].name);
        printf("%d\t",s1[j].roll_no);
        printf("%d\t",s1[j].Phy);
        printf("%d\t",s1[j].Chem);
        printf("%d\t",s1[j].Maths);
        printf("%d\t",s1[j].Eng);
        printf("%d\t",s1[j].Prog);
        printf("\n");
    }

    return 0;

}