#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,no=11;

    while(i<no)
    {
        if(no%i==0)
        {
            break;
        }
        i++;
    }
    if(i==0)
    {
        printf("\n The given number %d is a prime no.",no);
    }
    else
    {
        printf("\n The given number %d is composite.",no);
    }
    getch();
    return 0;
}
