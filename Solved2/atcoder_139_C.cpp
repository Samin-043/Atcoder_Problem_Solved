#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[105];
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    double sum;
    sum=arr[0];
    if(n==2)
    {
        printf("%.1f",((arr[0]+arr[1])*1.0)/2);
    }
    else if(n>2)
    {
        for(i=1; i<n; i++)
        {
            sum=((sum+arr[i])*1.0)/2;
        }
        printf("%.1f\n",sum);
    }
    return 0;
}
