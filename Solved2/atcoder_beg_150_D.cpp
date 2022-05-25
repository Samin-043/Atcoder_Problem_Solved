#include<bits/stdc++.h>
int main()
{
    long long int res,i,j,n,m,arr[100000];
    scanf("%lld %lld",&n,&m);
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&arr[i]);
    }

    for(j=1; j<=m; j++)
    {

        //scanf("%lld",&arr[i]);
        for(j=1;;j++)
        {
            res=arr[i]*(j+0.5);
        }
    }
    return 0;
}
