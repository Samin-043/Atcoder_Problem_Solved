#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6];
    for(int i=1;i<=5;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            cout<<i;
        }
    }
    cout<<endl;
    return 0;
}
