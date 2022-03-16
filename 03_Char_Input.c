#include<stdio.h>
#include<conio.h>
int main()
{
    char ch="\0";
    printf("\n Enter a character:");

    scanf("%c",&ch);

    printf("\n----------****--------------------");
    printf("\n Your character is:%c",ch);
    printf("\n----------****--------------------");

    getch();
    return 0;

}
