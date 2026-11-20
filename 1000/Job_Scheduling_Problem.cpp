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



mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

void  adie () {

   int n;
   cin >> n;

   vector< vi > v(n, vector<int>(3));

   h (i, 0, n) {
      h (j, 0, 3) cin >> v[i][j];
   }

   //
   
   int profit = 0;
   int cnt = 0;

   sort (v.begin(), v.end(), [](const auto& a, const auto& b){
      if (a[1] != b[1]) return a[1] < b[1];
      return a[2] > b[2];
   });

   int i=0;
   int t=1;
   while (i < n) {
      if (v[i][1] >= t) {
         profit += v[i][2];
         ++t;
         ++i;
         ++cnt;
      } else {
         ++i;
      }
   }

   cout << profit << ' ' << cnt << nl;
}



int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int TC;
   cin >> TC;

   while (TC--){
      adie();
   }

   return 0;
}