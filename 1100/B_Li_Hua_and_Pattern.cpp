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



mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

bool adie () {
   int n, k;
   cin >> n >> k;

   vector<vi> v(n, vi(n));
   h (i, 0, n) scan(v[i]);

   ll ans = 0;

   h (i, 0, n/2) {
      h (j, 0, n) {
         if (v[i][j] != v[n-i-1][n-j-1]) ++ans ;
      }
   }

   if (n%2 == 1) {
      h(j, 0, n/2) {
         if (v[j] != v[n - j -1]) {
            ++ans ;
         }
      }
   }

   // cout << ans << nl;

   if (ans > k) return false;

      if (n%2 == 1) return true; //odd

      if ((ans-k) % 2 == 1) { //even
         return false;
      }

   return true;
}



int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int TC;
   cin >> TC;

   while (TC--){
      print (adie());
   }

   return 0;
}