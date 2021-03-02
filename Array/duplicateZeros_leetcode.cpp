#include<bits/stdc++.h>
using namespace std;

void duplicateZeros(vector<int>& arr) {
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i] == 0)
		{
			for (int j = arr.size()-2; j >= i; --j)
           	{
           		arr[j+1] = arr[j];
            }
            i++;
		}
	}
    for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] <<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	duplicateZeros(v);
}