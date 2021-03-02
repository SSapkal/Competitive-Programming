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
		int activities;
		string origin;
		cin >> activities >> origin;

		int laddus = 0;
		while(activities--)
		{
			string activity;
			cin >> activity;
			if(activity == "CONTEST_WON")
			{
				int rank;
				cin >> rank;
				laddus += 320-(rank<20?rank:20);
			}
			else if(activity == "TOP_CONTRIBUTOR")
			{
				laddus += 300;
			}
			else if(activity == "BUG_FOUND")
			{
				int severity;
				cin >> severity;
				laddus += severity;
			}
			else if(activity == "CONTEST_HOSTED")
			{
				laddus += 50;
			}
		}

		if(origin == "INDIAN")
		{
			cout << laddus/200 << "\n";
		}
		else if (origin == "NON_INDIAN")
		{
			cout << laddus/400 << "\n";
		}

	}

}