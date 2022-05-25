#include<stdio.h>
#include<string.h>
int main()
{
    char s[12];
    scanf("%s",s);
    int i,c,d;
    i=c=d=0;
    while(s[i]!='\0')
    {
        if(s[i]=='A'||s[i]=='C'||s[i]=='G'||s[i]=='T')
        {
            c++;
        }
        else
        {
            c=0;
        }
        if(c>d)
        {
            d=c;
        }
        i++;
    }
    printf("%d\n",d);
    return 0;
}
