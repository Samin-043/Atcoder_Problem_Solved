#include<bits/stdc++.h>
int main()
{
    int len;
    scanf("%d",&len);
    char s[len];
    scanf("%s",s);
    int i,c;
    i=c=0;
    while(s[i]!='\0')
    {
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C')
        {
            c++;
            i=i+3;
        }
        else
        {
            i++;
        }
    }
    printf("%d\n",c);
    return 0;
}
