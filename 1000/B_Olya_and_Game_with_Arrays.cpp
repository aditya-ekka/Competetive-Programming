#include <iostream>
#include <climits>
#include <vector>
using namespace std;

long long aakash(){
   long long n;
   cin >> n;
   long long a[n], b[n];
   for(long long i=0; i<n; i++){
      long long m;
      cin >> m;
      long long ar[m];
      for(long long j=0; j<m; j++){
         cin >> ar[j];
      }

      //
      // for(long long j=0; j<m; j++){
      //    cout <<  ar[j] << " ";
      // }cout << endl;

      long long min_1=0, min_2=0;
      for(long long j=0; j<m; j++){
         if(ar[j] < ar[min_1]){
            min_1 = j;
         }
      }

      min_2 = min_1==0 ? 1 : 0;
      for(long long j=min_2; j<m; j++){
         if(min_1 == j) continue;
         if(ar[j] < ar[min_2]){
            min_2 = j;
         }
      }

      a[i] = ar[min_1];
      b[i] = ar[min_2];
   }

   long long ans=0, i=a[0];
   for(long long j=0; j<n; j++){
      // ans += a[j];
      if(a[j] < i){
         i = a[j];
      }
   }
   ans += i;

   i=b[0];
   for(long long j=0; j<n; j++){
      ans += b[j];
      if(b[j] < i){
         i = b[j];
      }
   }
   ans -= i;

   // for( i=0; i<n; i++){
   //    cout << a[i] << " ";
   // }
   // cout << endl;
   // for( i=0; i<n; i++){
   //    cout << b[i] << " ";
   // }
   // cout << endl;

   return ans;
}
int main()
{
   long long t;   cin >> t;
   while (t--){
      cout << aakash() << endl;
   }
}