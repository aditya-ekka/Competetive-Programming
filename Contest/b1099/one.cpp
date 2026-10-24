#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

void adie()
{
	 int n;
	 cin >> n;
	 for (int i=n; i<2*n; i++)
		  cout << i << " ";
	 cout << endl;
}

int main()
{
	 int t;
	 cin >> t;
	 for(int i=0; i<t; i++)
		  adie();
}
