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

	 // find index k

	 ll profit=0, surplus=0, k=-1;

	 h(i, 0, n){
		  if(ar[i]<0){
				profit += ar[i]*-1;
		  }else{
				if (profit - ar[i] > surplus){
					 surplus = profit - ar[i];
					 k = i;
				}
		  }
	 }

	 //k is the final turning point

	 if (k==-1){
		  cout << 0 << endl << endl;
		  return;
	 }

	 //question number 3

	 int flip=1;
    vector <ll> ans;

    for (int i=k-1; i>=0; i--)
    {
        if (ar[i]*flip > 0){
            ans.push_back(i+1);
            flip *= -1;
        }
    }

    //result
    cout << ans.size() + 1 << endl;
    h(i, 0, ans.size()){
        cout << ans[i] << " " ;
    }
    cout << k+1 << endl;
    
}

int main ()
{
    int _t;
    cin >> _t;
    for(int i=0; i<_t; i++)
        adie();
}
