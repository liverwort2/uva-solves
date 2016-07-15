#include<stdio.h>
#include<string.h>
int  main()
{
    char s[100000];
    int l,i,p=0;

    while(gets(s))
    {
    l=strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i]=='"')
        {
            p=p+1;
            if(p%2)  printf("``");
            else    printf("''");
        }
        else    printf("%c", s[i]);
    }
    }

    return 0;

}
