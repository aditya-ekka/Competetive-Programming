#include <iostream>
#define int long long
using namespace std;

void adie()
{
	 int n;
	 cin >> n;
	 int ar[n];
	 for (int i=0; i<n; i++){
		  cin >> ar[i];
	 }
	 
	 int ans=0;
	 int t=0; // to be added
	 int i=n;
	 while (--i >= 0){
		  ar[i] += t;
		  if(ar[i] <= 0){
				t=0;
		  }else{
				ans++ ;
				t=ar[i];
		  }
	 }

	 cout << ans << endl;
}

int32_t main()
{
	 int t;
	 cin >> t;
	 while(t--)
		  adie();
}
