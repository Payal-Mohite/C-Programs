 #include<stdio.h>
#include<conio.h>
int main()
{
    char name[10]="\0";
    int rollno=0;
    int mo_no=0;

    printf("\n---------------************------------------");

    printf("\n \t Enter Your ROLLNO=");
    scanf("%d",&rollno);
    printf("\n \t Your Roll_NO is:%d",rollno);

    printf("\n----------------*************------------------");

    printf("\n \t Enter Your Name=");
    scanf(" %[^\n]",&name);
    printf("\n \t Your Name is:%s",name);

    printf("\n----------------*************------------------");

    printf("\n \t Enter Your Mobile_Number=");
    scanf("%d",&mo_no);
    printf("\n \t Your Mobile Number is:%d",mo_no);


    printf("\n-----------********THANK YOU********-------------");

    printf("\n-----------------*************-----------------");

    getch();
     return 0;
}
