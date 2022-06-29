#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,no=0;

    printf("\n enter any number:");
    scanf("%d",&no);
    while(i<=no)
    {
        if(no%i==0)
        {
            printf("\n %d",i);

        }
        i++;

    }
    getch();
    return 0;
}
