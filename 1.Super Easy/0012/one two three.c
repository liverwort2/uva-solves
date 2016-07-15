#include<stdio.h>
#include<string.h>

int main()
{
    char num[7];
    int tc,i;

    scanf("%d", &tc);

    while(tc--)
    {
        gets(num);


        if(strlen(num)==5)
            printf("3\n");
        else if((num[0]=='n')||(num[0]=='e')||(num[1]=='n')||(num[1]=='e')||(num[2]=='n')||(num[2]=='e'))
            printf("1\n");
        else printf("2\n");

    }

    return 0;

}
