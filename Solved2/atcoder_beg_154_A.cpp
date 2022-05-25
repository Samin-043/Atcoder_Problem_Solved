#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[11],t[11],u[11];
    scanf("%s %s",s,t);
    int a,b;
    scanf("%d %d",&a,&b);
    scanf("%s",u);
    int len1,len2,len3;
    len1=strlen(s);
    len2=strlen(t);
    len3=strlen(u);
    if(s[0]==u[0]&&s[len1-1]==u[len3-1])
    {
        a--;
    }
    else if(t[0]==u[0]&&t[len2-1]==u[len3-1])
    {
        b--;
    }
    printf("%d %d\n",a,b);
    return 0;
}

