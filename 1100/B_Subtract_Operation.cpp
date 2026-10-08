#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

bool solve () {
   int n, k;
   cin >> n >> k;
   
   int ar[n];
   for (int i=0; i<n; ++i)
      cin >> ar[i];
   
   sort (ar, ar + n);
   
   int i = 0;
   int j = 0;

   while (j < n) {
      if (ar[j] - ar[i] == k) {
         return true;
      } else if (ar[j] - ar[i] < k) {
         ++j;
      } else {
         ++i;
      }
   }

   return false;
}   


int main () {
   int t;
   cin >> t;
   while (t--) {
      string ans = solve() ? "YES\n" : "NO\n";
      cout << ans;
   }
}

// set <int> s;
// for (int i=0; i<n; ++i) {
//    int t;
//    cin >> t;
//    s.insert(t);
// }

// auto it = s.begin();

// while (it != s.end()) {
//    for (auto j = it; (j != s.end()) && (*j - *it <= k); ++j) {
//       if ( *j - *it == k) {
//          return true;
//       }
//    }

//    ++it ;
// }

// return false;

// set is taking O(n2)