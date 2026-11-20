#include <iostream>

using namespace std;

long long solve(){
   int n, k;
   cin >> n >> k;

   int a[n*k];
   for (int i=0; i<n*k; ++i){
      cin >> a[i];
   }

   long long ans = 0;
   // k arrays of size n

   int gap =  ;
   int i = n*k - gap - 1;

   for (int j=0; j<k; ++j) {
      ans += a[i];
      i -= gap;
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

/*

2  => 1
3  => 2     n + 1 / 2
4  => 3


*/