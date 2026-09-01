#include <iostream>
using namespace std;

int dp(int n)
{
   string s;
   cin >> s;
   int ar[n];
   for(int i=0; i<n; i++){
      ar[i] = 0;
   }
   for(int i=0; i<n; i++){
      for(int j=i-1; j>=0; j--){
         if(s[i] == s[j]){
            ar[i] = ar[j] + 1;
            break;
         }
      }
   }
   //
   int ans=0;
   for(int i=0; i<n; i++){
      ans += i+1 - ar[i];
      cout << ans << " ";
   }
   //
   return ans;
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      cout << dp(n) << endl;
   }
   return 0;
}