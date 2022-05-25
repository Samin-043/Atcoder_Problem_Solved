#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	string s;
	cin>>s;
	int a,b;
	cin>>a>>b;
	a--;
	b--;
	char c1=s[b];
	char c2=s[a];
	for(int i=0;i<s.size();i++)
	{
		if(i==a)
		{
			cout<<c1;
		}
		else if(i==b)
		{
			cout<<c2;
		}
		else
		{
			cout<<s[i];
		}
	}
	cout<<endl;
	return 0;
}