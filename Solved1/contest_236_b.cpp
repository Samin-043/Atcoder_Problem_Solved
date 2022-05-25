#include <bits/stdc++.h>
#define ll long long
#define size 100000
using namespace std;
ll arr[size];
int main() {
	ll n;
	cin>>n;
	//ll ind=0;
	ll total_ind=(4*n)-1;
	ll arr[n+1]={0};
	for(ll i=0;i<total_ind;i++)
	{
		ll val;
		cin>>val;
		arr[val]++;
	}
	int min_val=4;
	ll final_val;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]<min_val)
		{
			min_val=arr[i];
			final_val=i;
		}
	}
	cout<<final_val<<endl;
	return 0;
}