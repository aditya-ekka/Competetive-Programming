/*
SET
number of distinct elements from left to right -> arr A
number of distinct elements from right to left -> arr B
--
check at what index the sum of A[i] + B[i] is max is the answer
*/

#include <iostream>
#include <set>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--)
   {
      int n;
      cin >> n;
      string s;
      cin >> s;

      set<char> ar;
      int l[n+1], r[n];

      l[0]=0;
      for(int i=1; i<=n; i++){
         ar.insert(s[i-1]);
         l[i] = ar.size();
      }

      ar.clear();
      
      // r[0]=0;
      for(int i=0; i<n; i++){
         ar.insert(s[n-i-1]);
         r[n-1-i] = ar.size();
      }

      int ans=0;
      for(int i=0; i<n; i++){
         ans = max(ans, l[i]+r[i]);
      }

      // for(int i=0; i<n; i++){
      //    cout << l[i] << " ";
      // }cout << endl;
      // for(int i=0; i<n; i++){
      //    cout << l[i] << " ";
      // }cout << endl;
      cout << ans << endl;
   }
}