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
		int g;
		cin>>g;
		while(g--)
		{
			int i,n,q;
			cin >> i >> n >> q;
			int count = 0;
			if(n%2 == 0)
			{
				count = n/2;
			}
			else
			{
				if(i == q)
				{
					count = n/2;
				}
				else
				{
					count = n/2 + 1;
				}
			}
			cout << count << endl;
		}
	}

}