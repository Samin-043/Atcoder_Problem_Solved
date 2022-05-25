#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    cin.ignore();
    vector<string>vec;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        vec.push_back(s);
    }
    sort(vec.begin(),vec.end());
    //cout<<endl;
    vector<string>vec1;
    for(int i=0;i<n;i++)
    {
        string str=vec[i];
        if(str[0]=='!'||str[0]=='0')
        {
            str.erase(str.begin()+0);
            vec1.push_back(str);
        }
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        string str=vec[i];
        if(str[0]=='0'||str[0]=='!')
        {
            continue;
        }
        for(int j=0;j<vec1.size();j++)
        {
            string str=vec[i];
            string str1=vec1[j];
            if(str==str1)
            {
                if(str==str1)
                {
                    cout<<str;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        cout<<"satisfiable";
    }
    cout<<endl;
    return 0;
}
