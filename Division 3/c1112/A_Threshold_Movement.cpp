#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--){
      int n;
      cin >> n;
      int ar[n];
      for(int i=0; i<n; i++){
         cin >> ar[i];
      }
      //code
      if(n<=1){
         cout << "NO" << endl;
         continue;
      }
      if(n%2==1){
         cout << "NO" << endl;
         continue;
      }
      //else swap at each location
      int mxm=ar[1], mnm=ar[0];
      for(int i=1; i<n; i+=2){
         if(ar[i] > mxm){
            mxm = ar[i];
         }
      }
      for(int i=0; i<n; i+=2){
         if(ar[i] < mnm){
            mnm = ar[i];
         }
      }
      
      // cout << mxm << " " << mnm << " " ;
      if(mnm - mxm > 1){
         cout << "YES" << endl;
      }
      else{
         cout << "NO" << endl;
      }
   }
}