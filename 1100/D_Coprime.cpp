#include <iostream>
#include <numeric>

using namespace std;

int solve()
{
   int n;
   cin >> n;

   int v[n];
   for(int i=0; i<n; ++i){
      cin >> v[i];
   }


   int diff = 1;
   int ans = 0;
   for(int i=n-1; i>=0; --i){
      for(int j=n-1; j>=i; --j){
         if(gcd(v[i] , v[j]) == 1){
            return i+j+2;
         }
      }
   }

   return -1;
}

int main()
{
   int test;
   cin >> test;
   while(test--){
      cout << solve() << endl;
   }
}