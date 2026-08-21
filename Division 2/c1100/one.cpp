//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

//#define max(a, b) a>b?a:b;
//#define min(a, b) a+b-max(a,b);

void adie()
{
	int n;
	cin >> n;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin >> ar[i];
	}
	 
/*
	int avg=0;
	for(int i=0; i<n; i++)
	{
		avg += ar[i];
	}

	if ((avg%n)*2 > n)
		 avg = avg/n + 1;
	else
		 avg = avg/n;

	//cout << avg << endl;

	int mx=0;
	for (int i=0; i<n; i++)
	{
		if (max(avg, ar[i]) - 
	   min(avg, ar[i]) > mx )
			mx = max(avg, ar[i]) -
				  min(avg, ar[i]);
	}

	cout << mx << endl;
*/

	int mx = ar[0], mn = ar[0];
	for(int i=1; i<n; i++)
   {
		 mx = max(ar[i], mx);
		 mn = min(ar[i], mn);
   }

	cout << (mx - mn + 1) /2 << endl;
}

int main()
{
	int testcase;
	cin >> testcase;
	for (int i=0; i<testcase; i++)
	{
		adie();
	}
}
