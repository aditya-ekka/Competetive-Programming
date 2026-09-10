#include <iostream>
using namespace std;
int main(){
   int test;
   cin >> test;
   while(test--){
      long long a, b, k;
      cin >> a >> b >> k;
      // long long ans = k * (b%a);
      for(int i=0; i<=k; i++){
         cout << (b+i)/(a+i) << " " <<  (b+i)%(a+i) << endl;
      }
      // cout << ans << endl;
   }
}