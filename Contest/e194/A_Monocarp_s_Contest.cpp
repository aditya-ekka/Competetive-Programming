#include <iostream>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--){
      int n, ans=0;
      cin >> n;
      int ar[n];
      for(int i=0; i<n; i++){
         cin >> ar[i];
         if(ar[i]==1) ans++;
      }

      if(ans > n-2){
         cout << -1;
      }else{
         int count = 0;
         if(ar[0]==1) count++;
         if((ar[n-1]==1) &&( n-1 != 0)) count++;
         cout << count;
      }
      cout << endl;
   }
   return 0;
}