#include <iostream>
#include <vector>

using namespace std;

long long solve () {
   long long n;
   cin >> n;

   vector<long long> v(n);
   for(long long i=0; i<n; ++i) {
      cin >> v[i];
   }


   long long ans = 0;
   long long e = v[n-1];
   
   for (long long i = n - 2; i >= 0; --i) {
      if (v[i] != e) {
         ++ans ;
         i = n - (n - i - 1) * 2 ;
      }
   }

   return ans;
}

int main () {
   long long t;
   cin >> t;
   while (t--) {
      cout << solve() << endl;
   }
}