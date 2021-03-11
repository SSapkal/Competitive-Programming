#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
	int p1 = m-1;
	int p2 = n-1;
	int p = m+n-1;

	if(p1 == -1)
    {
        for(int i=0;i<n;i++)
        {
            nums1[i] = nums2[i];
        }
    }

	while(p1>=0 && p2>=0)
	{
		if(nums1[p1] > nums2[p2])
		{
			nums1[p] = nums1[p1];
			p1--;
		}
		else
		{
			nums1[p] = nums2[p2];
			p2--;
		}
		p--;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v1(3,0);
	vector<int> v2(3);
	for(int i=0;i<3;i++)
	{
		//v1[i] = 2*i+1;
		v2[i] = 2*i+2;
	}
	merge(v1,0,v2,3);

	// for (int i = 0; i < 6; ++i)
	// {
	// 	cout<<v1[i]<<endl;
	// }
	for (int i = 0; i < 3; ++i)
	{
		cout<<v1[i]<<endl;
		cout<<v2[i]<<endl;
	}
}


