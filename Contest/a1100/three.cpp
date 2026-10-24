#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define h(x,i,j) for(ll x=i; x<j; x++)

using namespace std;

void adie()
{
    int n;
    cin >> n;
    ll ar[n];
    for (ll i=0; i<n; i++)
    {
        cin >> ar[i];
    }

	 int flip=1;
	 vector <ll> ans;
	 
	 for (int i=n-1; i>=0; i--)
	 {
		  if (ar[i]*flip > 0){
				ans.push_back(i+1);
				flip *= -1;
		  }
	 }
	 
	 //result
	 cout << ans.size() << endl;
	 h(i, 0, ans.size()){
		  cout << ans[i] << " " ;
	 }
	 cout << endl;
}

int main ()
{
    int _t;
    cin >> _t;
    for(int i=0; i<_t; i++)
        adie();
}
