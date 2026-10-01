#include <iostream>
#include <map>
#include<vector>
#include<algorithm>
#define ll long long

using namespace std;

void solve()
{
   int n, k;
   cin >> n >> k;
   string s;
   cin >> s;

   int cnt=0;
   for(int i=0; i<k-1; ++i){
      if(s[i] == 'W'){
         cnt++ ;
      }
   }

   int ans=__INT_MAX__;
   for(int i=k-1; i<n;){
      if(s[i]=='W'){
         cnt++ ;
      }

      ans = min(ans, cnt);
      i++;

      if(s[i-k] == 'W'){
         cnt-- ;
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