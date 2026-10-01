#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long

using namespace std;

void solve()
{
   ll n, k, beauty, sum;
   cin >> n >> k >> beauty >> sum;

   ll min_a = (beauty * k) / n;

   ll mul = sum / (beauty * k);
}


int main()
{
   int t;
   cin >> t;
   while(t--){
      solve();
   }
   return 0;

}