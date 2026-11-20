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
#define hr(i, a, b)  for(ll i=a; i>=b; --i)
#define H(it, m)     for(auto it=m.begin(); it != m.end(); ++it)

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

5 7 2

if (abs(a - b) > x)
      return solve(
         min(a, b),
         max(a, b) / x,
         x,
         ans + 1
      );

   if (min(a, b) - (max(a, b)/x) > x)
      return ans + abs(a - b);


   return min (
      ans + abs (a - b),
      solve (
         min(a, b),
         max(a, b) / x,
         x,
         ans + 1
      )
   );

mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/
int solve(int a, int b, int x, int ans) {
   if (a==b) return ans;

   return min (
      ans + abs(a - b),
      solve (
         min(a, b),
         max(a, b) / x,
         x,
         ans + 1
      )
   );
}

int adie () {
   int a, b, x;
   cin >> a >> b >> x;

   return solve(a, b, x, 0);
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