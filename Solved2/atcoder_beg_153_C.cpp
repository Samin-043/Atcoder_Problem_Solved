#include<bits/stdc++.h>
int main()
{
    long long int sum,i,n,k,arr[100000];
    scanf("%llu %llu",&n,&k);
    sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0; i<n-k; i++)
    {
        sum+=arr[i];
        //scanf("%lld",&arr[i]);
    }
    if(k>=n)
    {
        printf("0");
    }
    else if(k>0)
    {
        //sum=sum-arr[n-k];
        printf("%lld",sum);
    }
    else
    {
        printf("%lld",sum);
    }

    printf("\n");
    return 0;
}
