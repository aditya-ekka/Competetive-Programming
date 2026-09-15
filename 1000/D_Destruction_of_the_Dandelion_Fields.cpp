#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while (test--){
      int n, t;
      cin >> n;
      long long ans=0;
      vector <int> ar;
      for(int i=0; i<n; i++){
         cin >> t;
         if( t%2 == 0){
            ans += t;
         }else{
            ar.push_back(t);
         }
      }

      int m = ar.size();
      if(m == 0){
         cout << "0\n";
      }else{
         sort(ar.begin(), ar.end());
         for(int i=m/2; i<m; i++){
            ans += ar[i];
         }
         cout << ans << endl;
      }
   }
}