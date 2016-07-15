#include<stdio.h>
#include<string.h>
int  main()
{
    char s[100000],c;
    int l,i;

    while(gets(s))
    {
    l=strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i]=='"')
        {
            if(i%2==0)  printf("``");
            else    printf("''");
        }
        else    printf("%c", s[i]);
    }
    }

    return 0;

}
