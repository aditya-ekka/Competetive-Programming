#include <iostream>
using namespace std;
int main()
{
   long long test;
   cin >>test;
   while(test--){
      int n;
      string s;
      cin >> n;
      cin  >> s;
      //

      if(s[0]=='1'){
         cout << n-1 << endl;
         continue;
      }

      int a[n+1], b[n];
      a[0]=0;
      int t=0;
      for(int i=1; i<n+1; i++){
         if(s[i-1]=='1'){
            t++;
         }
         a[i]=t;
      }

      t=0;
      for(int i=0; i<n; i++){
         if(s[n-i-1]=='0'){
            t++;
         }
         b[i]=t;
      }

      int idx=0;
      for(int i=0; i<n;i++ ){
         if(a[idx]+b[n-idx-1] > a[i]+b[n-i-1]){
            idx = i;
         }
      }

      int zero=0, one=0;
      for(int i=0; i<n; i++){
         if(s[i]=='0'){
            zero++;
         }
         a[i]=zero;
      }

      for(int i=n-1; i>=0; i--){
         if(s[i]=='1'){
            one++;
         }
         b[i]=one;
      }

      int ans = min (one, b[idx] + a[n-idx-1]);
      cout << ans <<endl;
      // cout << endl;
   }
}