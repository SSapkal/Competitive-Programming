#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	list<int> l1;
	int k1;
	cin >> k1;
	while(k1--)
	{
		int t;
		cin>>t;
		l1.push_back(t);
	}

	list<int> l2;
	int k2;
	cin>>k2;
	while(k2--)
	{
		int t;
		cin>>t;
		l2.push_back(t);
	}

	set<pair<list<int>, list<int> > > s;

	while(!l1.empty() && !l2.empty() && !s.count(make_pair(l1,l2)))
	{
		s.insert(make_pair(l1,l2));
		if(l1.front() > l2.front())
		{
			l1.push_back(l2.front());
			l1.push_back(l1.front());
		}
		else
		{
			l2.push_back(l1.front());
			l2.push_back(l2.front());
		}
		l1.pop_front();
		l2.pop_front();
	}

	if(l1.empty())
		cout << s.size() <<" 2";
	else if(l2.empty())
		cout << s.size() <<" 1";
	else
		cout<< "-1";
	return 0;
}