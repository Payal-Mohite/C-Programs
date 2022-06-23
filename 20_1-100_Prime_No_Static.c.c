#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,no=1;

    while(no<=100)
    {
        i=2;
        while(i<no)
        {
            if(no%i==0)
            {
                break;
            }
            i++;
        }
        if(i==no)
        {
            printf("\n %d",no);
        }
        no++;
    }
    getch();
    return 0;
}
