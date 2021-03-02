#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		int count = 1;
		int min = v[0];
		for(int i=1;i<n;i++)
		{
			if(v[i] < min)
			{
				count++;
				min = v[i];
			}
		}
		cout << count << endl;
	}

}