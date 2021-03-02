#include<bits/stdc++.h>
using namespace std;

int reverse(int x)
{
	int rev = 0;
	while(x)
	{
   	    int pop = x%10;
   	    
   	    if(rev > INT_MAX/10 || rev == INT_MAX/10 && pop>7) return 0;
   	    if(rev < INT_MIN/10 || rev == INT_MIN/10 && pop<-8) return 0;

		rev = rev*10 + pop;
   	    x/=10;
	}
	return rev;
}

int main()
{
	int x;
	cin >> x;
	int value = reverse(x);
	cout << value << endl;
}