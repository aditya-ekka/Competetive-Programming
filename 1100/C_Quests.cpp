#include <iostream>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--)
   {
      int n, k;
      cin >> n >> k;
      k--;
      int a[n];
      for(int i=0; i<n; i++){
         cin >> a[i];
      }
      int b[n];
      for(int i=0; i<n; i++){
         cin >> b[i];
      }
      
      int presum[n], //presum of 'a'
      premax[n];  //maximum element in 'b'
      presum[0] = a[0];
      premax[0] = 0;
      for(int i=1; i<n; i++){
         presum[i] = presum[i-1] + a[i];
         if(b[premax[i-1]] < b[i]){
            premax[i] = i;
         }else{
            premax[i] = premax[i-1];
         }
      }

      int ans = k<n ? presum[k] : presum[n-1] + b[premax[n-1]] * (k-n);
      for(int i=min(n-1, k); i>=0; i--){
         ans = max (ans, presum[i] + b[premax[i]] * (k-i));
      }

      // for(int i=0; i<n; i++){
      //    cout << presum[i]<<" ";
      // }
      // cout << endl;
      
      cout << ans << endl;
   }
}