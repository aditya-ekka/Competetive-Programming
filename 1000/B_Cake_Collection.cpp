#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--){
      int n, m;
      cin >> n >> m;
      int ar[n];
      for(int i=0; i<n; i++){
         cin >> ar[i];
      }
      sort(ar, ar+n);
      long long i=m, ans=0;
      for(int j=n-1; j>=0 && i>0; j--){
         ans += ar[j] * i;
         i--;
         // cout << ans << " ";
      }
      // ans += ar[0] * i;
      cout << ans << endl;
   }
   return 0;
}