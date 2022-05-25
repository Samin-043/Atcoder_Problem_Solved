#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll n,m;
	cin>>n>>m;
	//ll ind=0;
	vector<string>v1;
	vector<string>v2;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v1.push_back(s);
	}
	
	for(int i=0;i<m;i++)
	{
		string s;
		cin>>s;
		v2.push_back(s);
	}
	bool ck=false;
	for(int i=0;i<n;i++)
	{
		ck=false;
		for(int j=0;j<m;j++)
		{
			if(v1[i]==v2[j])
			{
				ck=true;
				break;
			}
		}
		if(ck==true)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
		cout<<endl;	
	}		
	return 0;
}