#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int ar[n];
      for (int i=0; i<n; i++) cin >> ar[i];
      
      //
      int i=0, j=0;
      int sum=ar[0];
      int ans = ar[0];
      
      for(int k=1; k<n; k++){
         ans = max(ans, ar[k]);
      }
      if(ans <= 0 ){
         cout << ans << endl;
         continue;
      }

      //
      while(j<n-1)
      {
         // cout << sum << " ";
         ans = max (ans, sum);
         if(sum <= 0){
            i = ++j; sum = ar[i];
            continue;
         }
         //
         if((((ar[j] + ar[j+1]) % 2) + 2) % 2 == 1){
            sum += ar[++j];
         }else{
            i = ++j; sum = ar[i];
         }
      }
      ans = max(ans, sum);

      cout << ans << endl;
   }
}