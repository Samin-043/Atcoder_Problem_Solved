#include<bits/stdc++.h>
int main()
{
    long long int i,a,b,arr[100000],sum;
    scanf("%lld %lld",&a,&b);
    sum=0;
    for(i=0;i<b;i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    if(sum>=a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    printf("\n");
    return 0;
}
