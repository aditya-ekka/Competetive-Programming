#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long solve() {
   ll n;
   cin >> n;
   vector<ll> v(n);
   for (ll i=0; i<n; ++i) {
      cin >> v[i];
   }

   ll m = n-4;
   vector< pair<ll, ll> > love(m);
   for (ll i=0; i<m; ++i) {
      love[i].first = v[i] + v[i+2] - v[i+4];
      love[i].second = i;
   }


   sort (love.begin(), love.end());

   ll ans = 0;

   ll i = 0; //inclusive
   ll j = 1; //exclusive
   ll e = love[0].first;
   
   while (j < m) {
      
      if (love[j].first == e) {
         ++j;
      } else {

         ll cnt = j - i;
         // if(cnt == 1) {
         //    ++i;
         //    e = love[i].first;
         //    ++j;
         // }

         ll gap2 = 0;
         ll gap4 = 0;

         //-----------------------------------------------
         ll l = i; 
         ll r = i + 1; 
         while (r < j) {
            if (love[r].second - love[l].second == 2){
               ++gap2 ;
               ++l ;
               ++r ;
            } else if (love[r].second - love[l].second > 2) {
               ++l ;
            } else {
               ++r ;
            }
         }

         l = i; 
         r = i + 1; 
         while (r < j) {
            if (love[r].second - love[l].second == 4){
               ++gap4 ;
               ++l ;
               ++r ;
            } else if (love[r].second - love[l].second > 4) {
               ++l ;
            } else {
               ++r ;
            }
         }
         //-----------------------------------------------

         ans += ((cnt * (cnt - 1)) / 2) - gap2 - gap4;
         
         i = j;
         e = love[i].first;
         ++j;
      }

   }

   //ONE MORE TIME EXECUTION
   ll cnt = j - i;
   // if(cnt == 1) {
   //    return ans;
   // }

   ll gap2 = 0;
   ll gap4 = 0;

   //----
   ll l = i; 
   ll r = i + 1; 
   while (r < j) {
      if (love[r].second - love[l].second == 2){
         ++gap2 ;
         ++l ;
         ++r ;
      } else if (love[r].second - love[l].second > 2) {
         ++l ;
      } else {
         ++r ;
      }
   }

   l = i; 
   r = i + 1; 
   while (r < j) {
      if (love[r].second - love[l].second == 4){
         ++gap4 ;
         ++l ;
         ++r ;
      } else if (love[r].second - love[l].second > 4) {
         ++l ;
      } else {
         ++r ;
      }
   }
   //----

   ans += ((cnt * (cnt - 1)) / 2) - gap2 - gap4;
   //one more time ends here -------------------------------------------

   return ans;
}

int main() 
{
   int t;
   cin >> t;
   while (t--) {
      cout << solve() << "\n";
   }
}