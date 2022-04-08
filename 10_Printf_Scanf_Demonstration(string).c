#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20] = "\0";
    printf("\n \t Enter your name: ");
    scanf("%[^\n]",&name);
    printf("\n ---------------******-----------------");



    printf("\n \t Your name is:%s",name);
    printf("\n ---------------******-----------------");

    getch();
    return 0;

}
