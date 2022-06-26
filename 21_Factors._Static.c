#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,no=6;

    printf("\n Factors of %d are:",no);
    while(i<=6)
    {
        if(no%i==0)
        {
            printf("\n %d",i);
        }i++;

    }

    printf("\n Thank you");

    getch();
    return 0;
}
