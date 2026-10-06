#include <iostream>
#include <vector>
#include <math.h>
#define ll long long int

using namespace std;

ll solve()
{
   ll n, c;
   cin >> n >> c;

   vector<ll> v(n);
   for(ll i=0; i<n; ++i){
      cin >> v[i];
   }


   ll x=0, y=0;
   for(ll i=0; i<n; ++i){
      x += v[i];
      y += v[i] * v[i];
   }

   ll ans = (sqrt(((1.0L * x * x) - y) + c)   -   x) / 2;
   
   return ans ; 
}

int main()
{
   int test;
   cin >> test;
   while(test--){
      cout << solve() << endl;
   }
}