#include <iostream>

using namespace std;

int solve () {
   int n;
   cin >> n;

   int ar[n];
   for (int i=0; i<n; ++i) {
      cin >> ar[i];
   }

   if (n == 1) return 0;

   int i = 0;
   int j = n-1;
   int lw = ar[i];
   int rw = ar[j];
   int ans = 0;

   while (i < j) {
      if (lw == rw) {
         ans = i + 1 + n - j;
         ++i ;
         if (i < j) lw += ar[i];
         --j ;
         if (i < j) rw += ar[j];
      } else if (lw < rw) {
         ++i ;
         if (i < j) {
            lw += ar[i];
         }
      } else {
         --j ;
         if (i < j) {
            rw += ar[j];
         }
      }
   }

   return ans;
}

int main () {
   int t;
   cin >> t;
   while (t--) {
      cout << solve () << endl;
   }
}