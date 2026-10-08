#include <iostream>

using namespace std;

int solve(){
   int n, k;
   cin >> n >> k;

   int a[n*k];
   for (int i=0; i<n*k; ++i){
      cin >> a[i];
   }


   int mid = (n+1)/2;
   // if(n % 2 == 1) mid++;

   mid-- ;

   int ans = 0;
   for (int i=0; i < k; ++i) {
      ans += a[(i * n) + mid] ;
   }

   return ans;
}

int main(){
   int test;
   cin >> test;
   while(test--){
      cout << solve() << endl;
   }
}