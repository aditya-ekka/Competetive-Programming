#include <iostream>
#include<vector>
#include <map>
#include<algorithm>
#define ll long long

using namespace std;

void solve()
{
   string a, b;
   cin >> a >> b;
   int n=a.size(), m=b.size();
   int ans=0;

   for(int i=0; i<n; ++i){
      for(int j=0; j<m; ++j){

         if(a[i] == b[j]){

            int cnt = 1;
            for(int k=1; (i+k<n) && (j+k<m); ++k){
               if(a[i+k] == b[j+k]){
                  cnt++;
               }else{
                  break;
               }
            }
            ans = max( ans, cnt );

         }

      }
   }
   cout << n + m -  (2 * ans) << endl;
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