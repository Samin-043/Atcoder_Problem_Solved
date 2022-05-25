#include<bits/stdc++.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);
    c=0;
    while(a>0)
    {
        a=a-b;
        c++;
    }
    printf("%lld\n",c);
    return 0;
}
