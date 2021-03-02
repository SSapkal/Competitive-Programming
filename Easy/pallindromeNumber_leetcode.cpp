#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) 
{
	if(x<0)
		return false;
	else
	{
		int duplicate=x;
		int rev=0;
		while(x)
		{
			int pop = x%10;
			if(rev > INT_MAX/10 || rev == INT_MIN && pop > 7) return false;
			rev = rev*10 + pop;
			x/=10;
		}
		if(duplicate == rev)
			return true;
		else
			return false;
	}
}

int main()
{
	int x;
	cin>>x;
	bool value = isPalindrome(x);
	cout << value << endl;
	return 0;
}