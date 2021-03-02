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
		int noOfFive = 0;
		int fivePower = 5;
		while(n/fivePower)
		{
			noOfFive += n/fivePower;
			fivePower *= 5; 
		}
		cout << noOfFive <<endl;
	}

}