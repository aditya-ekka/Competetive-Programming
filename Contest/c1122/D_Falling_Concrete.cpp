#include <iostream>
using namespace std;

long long largest_continuous_len(long long ar[], long long n){
   long long ans = 1, last = ar[0], temp=1;
      for(long long i=1; i<n; i++){
         if(ar[i]==last){
            temp++;
         }else{
            ans = max (ans, temp);
            temp = 1;
            last = ar[i];
         }
      }
      ans = max (ans, temp);

      return ans;
}

int main()
{
   long long test;
   cin >> test;
   while(test--)
   {
      long long n;
      cin >> n;
      long long ar[n];
      for(long long i=0; i<n; i++){
         cin  >> ar[i];
      }

      // bool flag = true;
      // while(flag)
      // {
      //    flag = false;
      //    for(long long i=0; i<n-1; i++){
      //       if(ar[i+1]-ar[i]>1){
      //          flag = true;
      //          long long temp = ar[i];
      //          ar[i] = ar[i+1] - 1;
      //          ar[i+1] = temp + 1;
      //       }
      //    }
      // }

      long long ans = 1;
      
      for(long long i=1; i<n; i++){
         bool flag = true;
         while(flag)
         {
            flag = false;
            for (long long j=i; j>0; j--){
               if(ar[j] - ar[j-1] > 1){
                  flag = true;
                  long long temp = ar[j];
                  ar[j] = ar[j-1] + 1;
                  ar[j-1] = temp - 1;
               }
            }
         }
         ans = max(ans, largest_continuous_len(ar, i+1));
      }

      cout << ans << endl;

   }
}

// falied on testcase 2