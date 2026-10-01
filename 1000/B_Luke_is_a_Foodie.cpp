#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long

using namespace std;

void solve()
{
   int n, x;
   cin >> n >> x;
   vector<int> v(n);
   for(int i=0; i<n; i++){
      cin >> v[i];
   }

   int ans=0;
   int mx=v[0], mn=v[0];
   for(int i=0; i<n; i++){
      if(mx < v[i]){
         mx = v[i];
      }
      if(mn > v[i]){
         mn = v[i];
      }

      if(mx - mn > 2*x){
         ans++;
         mx = v[i];
         mn = v[i];
      }
   }
   cout << ans << endl;
}

int main()
{
   int t;
   cin >> t;
   while(t--){
      solve();
   }
   return 0;

}