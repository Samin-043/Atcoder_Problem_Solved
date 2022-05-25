#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&a!=c&&b!=c)
    {
        printf("Yes");
    }
    else if(b==c&&b!=a&&c!=a)
    {
        printf("Yes");
    }
    else if(a==c&&a!=b&&c!=b)
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

