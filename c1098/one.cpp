#include <iostream>
#define h(i, s, e) for(int i=s; i<e; i++) 

using namespace std;

void adie()
{
	 int n;
	 cin >> n;
	 int ar[n];
	 h(i, 0, n) cin>>ar[i];

	 int ans=0;
	 sort(ar, ar+n);
	 int i=0;
	 while (i<n){
		  if (ar[i] == 0){
				ans++;
				i++;
		  }else{
				break;
		  }
	 }

	 int cnt1 =0, cnt2 =0;
	 while(i<n){
		  if (ar[i] == 1)
				cnt1++;
		  else
				cnt2++;
		  i++;
	 }
	 
	 ans += min(cnt1, cnt2);

	 cout << ans << endl;
}	 

void adie2()
{
	 int n;                         
	 cin >> n;
	 int ar[n];                     
	 h(i, 0, n) cin>>ar[i];

	 int cnt0=0, cnt1=0, cnt2=0;
	 h(i, 0, n){
		  if(ar[i] == 0)
				cnt0++;
		  else if(ar[i] == 1)
				cnt1++;
		  else
				cnt2++;
	 }

	 cout << cnt0 + min(cnt1, cnt2) +
		  (max(cnt1, cnt2) - min(cnt1, cnt2))/3
			<< endl;
}
int main()
{
	 int t;
	 cin >> t;
	 h(i, 0, t) adie2();
}
