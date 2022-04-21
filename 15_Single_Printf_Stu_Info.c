#include<stdio.h>
#include<conio.h>
int main()
{
    char Name[20]="\0",
    City[20]="\0",
    Course[20]="\0";

    int Roll_no=0;

    printf("\n Enter your name:");
    scanf("%s",&Name);

    printf("\n Enter your roll_no:");
    scanf("%d",&Roll_no);

    printf("\n Enter your city name:");
    scanf("%s",&City);

    printf("\n Enter course:");
    scanf("%s",&Course);

    printf("---------------------------****--------------------------");

    printf("\n Student Name is:    %s \n\n Student Roll_no is: %d \n\n Student City is:    %s \n\n Student Course is:  %s",
            Name,Roll_no,City,Course );
    getch();
    return 0;
}
