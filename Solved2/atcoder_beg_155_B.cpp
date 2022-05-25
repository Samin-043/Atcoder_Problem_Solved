#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,arr[1000],arr1[1000],c1,c2;
    cin>>n;
    c1=c2=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            arr1[c1]=arr[i];
            c1++;
        }
    }

    for(i=0; i<c1; i++)
    {
        if(arr1[i]%3==0||arr1[i]%5==0)
        {
            c2++;
        }
    }

    if(c1==c2)
    {
        printf("APPROVED");
    }
    else
    {
        printf("DENIED");
    }
    printf("\n");

    return 0;
}
