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

h (i, 0, n-1) {
   if (v[i] == v[i+1])
      ans = (ans | v[i]);
   else
      ans = (ans | max(v[i], v[i+1]) | (max (v[i], v[i+1]) - 1));
}


mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

ll adie () {
   int n;
   cin >> n;
   vll v(n);
   scan(v);

   auto it = max_element (v.begin(), v.end());
   ll e = * it;

   auto before_begin = v.begin();
   --before_begin ;
   for (auto jt=it; jt != before_begin ; --jt) {
      if (*jt < e)
         return (e | (e-1));
   }

   for (auto jt = it; jt != v.end() ; ++jt) {
      if (*jt < e)
         return (e | (e-1));
   }

   return e;
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