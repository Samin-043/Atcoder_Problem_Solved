#include<bits/stdc++.h>
int main()
{
    int n,a[105];
    scanf("%d",&n);
    double sum;
    sum=0.0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=1/(a[i]*1.0);
    }
    printf("%f",1/sum);
    printf("\n");
    return 0;
}
