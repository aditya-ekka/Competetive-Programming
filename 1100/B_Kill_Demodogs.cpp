#include<bits/stdc++.h>
using namespace std;

using ll  = long long;
using vi  = vector <int>;
using vll = vector <ll>;
using pii = pair <int, int>;
using pll = pair <ll, ll>;
using mii = map <int, int>;
using mll = map <ll, ll>;

#define all(x)       (x).begin(), (x).end()
#define rall(x)      (x).rbegin(), (x).rend()
#define h(i, a, b)   for(ll i=a; i<b; ++i)
#define H(m)         for(auto it=m.begin(); it != m.end(); ++it)

#define pb emplace_back
#define ff first
#define ss second

constexpr int INF = 1e9;
constexpr int MOD = 1e9 + 7;
constexpr ll LINF = 1e18;
constexpr char nl = '\n';

template <typename T>
void print (const T& c) {
   for (const auto& x: c)
      cout << x << " ";
   cout << "\n";
}

template <typename T>
void scan (T& c) {
   for (auto& x : c)
      cin >> x;
}

void print (bool x) {
   cout << (x ? "YES\n" : "NO\n");
}

/***wuwuwuwuwuwuwuw NOTE uwuwuwuwuwuwuwuwuwuwuwu

(a * b) mod m  =  ((a mod m) * (b mod m)) mod m
(a + b) mod m  =  ((a mod m) + (b mod m)) mod m

sum(i=1, i=n) i^2 = [ n * (n+1) * (2*n + 1)] / 6

mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

ll adie () {
   ll n;
   cin >> n;

   ll x = (n * n) % MOD;
   
   ll a = n, b = n-1, c = 2*n - 1;
   if (a%3 == 0){
      a /= 3;
   }else if (b%3 == 0){
      b /= 3;
   }else{
      c /= 3;
   }

   ll y = (((a * b) % MOD) * c) % MOD;

   a = n;
   b = n-1;

   if (a%2 == 0){
      a /= 2;
   }else{
      b /= 2;
   }

   ll z = (a * b) % MOD;

   ll ans = (((x + y) % MOD) + z) % MOD;

   ans = (2022 * ans) % MOD;
   return ans;
}



int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int TC;
   cin >> TC;

   while (TC--){
      cout << adie() << nl;
   }

   return 0;
}