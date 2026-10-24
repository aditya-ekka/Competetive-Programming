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

wrong answer on testcase 2

mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

ll adie () {
   ll n;
   cin >> n;
   vll v(n);
   scan(v);

   vll a(n), b(n);
   
   a[0] = v[0];
   ll presum = a[0];
   h(i, 1, n-1){
      a[i] = v[i] + llabs(presum); //as presum
      presum += a[i];
   }
   a[n-1] = v[n-1] + llabs(presum);

   b[0] = v[0];
   presum = b[0];
   h(i, 1, n-1){
      b[i] = v[i] - llabs(presum); //counting presum (neg)
      presum += b[i];
   }   
   b[n-1] = v[n-1] + llabs(presum);
   
   return max (
      * max_element (all(v)),
      max (
         * max_element (all(a)),
         * max_element (all(b))
      )
   );
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