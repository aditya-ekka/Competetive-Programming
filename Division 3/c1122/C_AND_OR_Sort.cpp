// #include <iostream>
// using namespace std;
// int main()
// {
//    long long test;
//    cin >>test;
//    while(test--){
//       int n;
//       string s;
//       cin >> n;
//       cin  >> s;
//       //

//       if(s[0]=='1'){
//          cout << n-1 << endl;
//          continue;
//       }

//       int a[n+1], b[n];
//       a[0]=0;
//       int t=0;
//       for(int i=1; i<n+1; i++){
//          if(s[i-1]=='1'){
//             t++;
//          }
//          a[i]=t;
//       }

//       t=0;
//       for(int i=0; i<n; i++){
//          if(s[n-i-1]=='0'){
//             t++;
//          }
//          b[i]=t;
//       }

//       int idx=0;
//       for(int i=0; i<n;i++ ){
//          if(a[idx]+b[n-idx-1] > a[i]+b[n-i-1]){
//             idx = i;
//          }
//       }

//       int zero=0, one=0;
//       for(int i=0; i<n; i++){
//          if(s[i]=='0'){
//             zero++;
//          }
//          a[i]=zero;
//       }

//       for(int i=n-1; i>=0; i--){
//          if(s[i]=='1'){
//             one++;
//          }
//          b[i]=one;
//       }

//       int ans = min (one, b[idx] + a[n-idx-1]);
//       cout << ans <<endl;
//       // cout << endl;
//    }
// }

#include <iostream>
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
      
      int one=0, zero=0;
      for(int i=0; i<n; i++){
         if(s[i]=='0'){
            zero++;
         }
      }

      if(s[0] == '1'){
         // all has to be '1'
         cout << zero << endl;
         continue;
      }

      one = n - zero;
      
      int a[n], b[n];

      a[0] = s[0]=='0' ? 1 : 0;
      for(int i=1; i<n; i++){
         if(s[i]=='0'){
            a[i] = a[i-1] + 1;
         }else{
            a[i] = a[i-1];
         }
      }

      b[n-1] = s[n-1] == '1' ? 1 : 0;
      for(int i=n-2; i>=0; i--){
         if(s[i] == '1'){
            b[i] = b[i+1] + 1;
         }else{
            b[i] = b[i+1];
         }
      }


      int idx=0;
      for(int i=0; i<n; i++){
         if(a[i]+b[i] > a[idx]+b[idx]){
            idx = i;
         }
      }

      // for(int i:a){
      //    cout << i << " ";
      // }cout << endl;

      int ones_before = idx + 1 - a[idx], //inclusive
          zeros_after = n - idx - b[idx]; //inclusive

      

      int ans = min (one, ones_before  +  zeros_after - 1);
      
      cout << ans << endl;
   }
}