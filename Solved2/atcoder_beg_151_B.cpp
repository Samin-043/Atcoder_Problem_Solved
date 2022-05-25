#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,k,m,ar[105],sum,flag;
    scanf("%d%d%d",&n,&k,&m);
    sum=flag=x=0;
    int i;
    for(i=0; i<n-1; i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    int h;
    h=n*m-sum;
    if(h>0&&h<=k)
    {
        printf("%d",h);
    }
    else if(h<=0)
    {
        printf("0");
    }
    else
    {
        printf("-1");
    }
    printf("\n");
    return 0;
}
