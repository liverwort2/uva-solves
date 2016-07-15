#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char c;

    while(1)
    {
        c=getch();
        if(c=='"')   printf("''");
        else if(c=='\r') printf("\n");
        else    printf("%c", c);
    }

    return 0;
}
