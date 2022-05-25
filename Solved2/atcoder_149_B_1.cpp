#include<bits/stdc++.h>
int main()
{
    long long int i,j,l,m,n,p;
    scanf("%lld%lld%lld",&m,&n,&p);
    if(p>=m)
    {
        printf("0");
        p=p-m;
    }
    else
    {

        m=m-p;
        printf("%lld",m);
        p=0;
    }
    printf(" ");
    if(p>=n)
    {
        printf("0");
    }
    else
    {
        n=n-p;
        printf("%lld",n);
    }
    printf("\n");
    return 0;
}
