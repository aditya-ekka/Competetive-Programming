#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      ll ar[n];
      for(int i=0; i<n; i++){
         cin >> ar[i];
      }

      //brute force
      ll ans=0;
      for(int i=1; i<=n/2; i++) // i is size of truck
      {
         ll mxm=LLONG_MIN, mnm=LLONG_MAX;
         if(n%i==0){
            // j-th truck of k-size
            for(int j=0; j<n; j+=i){
               ll tmp=0;
               for(int k=0; k<i; k++){
                  tmp += ar[j+k];
               }
               mxm = max(mxm, tmp);
               mnm = min(mnm, tmp);
            }
            ans = max(ans, mxm-mnm);
         }
      }

      cout << ans << endl;
   }
}