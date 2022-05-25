#include<bits/stdc++.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    if(b>a)
    {
        for(i=1;i<=b;i++)
        {
            printf("%d",a);
        }
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            printf("%d",b);
        }
    }
    printf("\n");
    return 0;
}
