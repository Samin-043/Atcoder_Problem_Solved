#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[130],k;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    sort(arr,arr+5);
    /*for(int i=0;i<5;i++)
    {

    }*/
    int res;
    res=arr[4]-arr[0];
    if(res>k)
    {
        printf(":(");
    }
    else
    {
        printf("Yay!");
    }
    printf("\n");
    return 0;
}

