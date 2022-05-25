#include<bits/stdc++.h>
using namespace std;
long long int n,arr[100000000];
int main()
{
    int flag;
    flag=1;
    long long int i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            flag=0;
            printf("NO");
            break;
        }
        //scanf("%lld",&arr[i]);
    }
    if(flag==1)
    {
        printf("YES");
    }
    printf("\n");
    return 0;
}
