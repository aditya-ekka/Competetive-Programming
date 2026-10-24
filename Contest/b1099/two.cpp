#include <iostream>
#include <limits>
#define h(i, s, e) for(int i=s; i<e; i++)

using namespace std;

void adie()
{
	 int n;
	 cin >> n;
	 int ar[n];
	 h(i, 0, n) cin >> ar[i];

	 // double downlfall cannot be solved

	 h(i, 0, n-2)
	 {
		  if (ar[i] > ar[i+1] &&
				ar[i+1] > ar[i+2])
		  {
				cout << "NO" << endl;
				return;
		  }
	 }
	 
	 // \// multiple-stcks going up!
	 h(i, 0, n-2)
	 {
		  if (ar[i] > ar[i+1] &&
				ar[i+1] < ar[i+2] &&
				ar[i] > ar[i+2])
		  {
				cout << "NO" << endl;
				return;
		  }
	 }

	 // \/ has a min, max range of co    rrection. and everything has to lie within it.
	 int mn=-1, mx=INT_MAX;
	 h(i, 0, n-2){
		  if(ar[i]>ar[i+1] && ar[i+1]<ar[i+2]){
				int nmn = min(ar[i], ar[i    +2]) - ar[i+1];
				int nmx = min(ar[i], ar[i    +2]) - ar[i+1];
				
				mn = max(nmn, mn);
				mx = min(mx, nmx);

				if (mx < mn){
					 cout << "NO" << endl;
					 return;
				}
		  }
	 }
	 if (ar[n-1] < ar[n-2]){
		  mn = max(mn, ar[n-2]-ar[n-1]);
	 }
	 if (ar[0] > ar[1]){
		  mx = min(mn, ar[0]-ar[1]);
	 }

	 if (mx < mn){
		  cout << "NO" << endl;
		  return;                          
	 }

	 cout << "YES" << endl;
}

int main()
{
	 int t;
	 cin >> t;
	 h(i, 0, t) adie();
	 return 0;
}

//so frasturating - bcz of many edge cases
