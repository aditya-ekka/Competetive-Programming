#include<iostream>
#include <algorithm>
#define ll long long
#define h(i,j) for(ll x=i; x<j; x++)
#define hx(x,i,j) for(ll x=i; x<j; x++)

using namespace std;

void adie()
{
	 int n;
	 cin >> n;
	 ll ar[2*n];
	 for (ll i=0; i<2*n; i++)
	 {
		  cin >> ar[i];
	 }
	 
	 sort (ar, ar + (2*n));

	 ll ans = 0;
	 for (ll i=n-1; i<2*n; i++)
		  ans += ar[i];

	 cout << ans << endl;
}

void adie2()
{
	 ll n;
	 cin >> n;
	 ll a[n], b[n];
	 hx(i, 0, n) cin >> a[i];
	 hx(i, 0, n) cin >> b[i];

	 ll mx=0, ans=0;
	 
	 hx(i, 0, n)
	 {
		  mx = max (mx, min(a[i], b[i]));
		  ans += max(a[i], b[i]);
	 }

	 cout << mx + ans << endl;
}

int main ()
{
	 int _t;
	 cin >> _t;
	 for(int i=0; i<_t; i++)
		  adie2();
}
