#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	long long int max_revenue = 0;
	long long int current_max_revenue = 0;
	for(int i=0;i<n;i++)
	{
		current_max_revenue = (n-i)*1LL*v[i];
		if(current_max_revenue > max_revenue)
		{
			max_revenue = current_max_revenue;
		}
	}
	cout << max_revenue <<endl;
}