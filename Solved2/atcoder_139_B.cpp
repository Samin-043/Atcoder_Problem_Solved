#include<bits/stdc++.h>
int main()
{
    int a,b,res,c;
    scanf("%d %d",&a,&b);
    c=0;
    res=1;
    while(res<b)
    {
        res--;
        res+=a;
        c++;
    }
    printf("%d\n",c);
    return 0;
}
