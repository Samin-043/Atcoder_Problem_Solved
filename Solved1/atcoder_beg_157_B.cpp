#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[105][105];
    int b[105];
    bool cond[105][105];
    //vector<int>v;
    int n,i,j;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>arr[i][j];
        }
    }

    int m;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        cin>>b[i];
    }

    int k,c;
    //c=0;
    //cond=false;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            cond[i][j]=false;
            for(k=1; k<=m; k++)
            {
                if(arr[i][j]==b[k])
                {
                    cond[i][j]=true;
                    //c++;
                }
            }
        }
    }

    string res="No";

    for(i=1; i<=3; i++)
    {
        if(cond[i][1]&&cond[i][2]&&cond[i][3])
        {
            res="Yes";
        }
    }

    for(i=1; i<=3; i++)
    {
        if(cond[1][i]&&cond[2][i]&&cond[3][i])
        {
            res="Yes";
        }
    }

    if(cond[1][1]&&cond[2][2]&&cond[3][3])
    {
        res="Yes";
    }

    else if(cond[1][3]&&cond[2][2]&&cond[3][1])
    {
        res="Yes";
    }

    cout<<res;

    printf("\n");
    return 0;

}
