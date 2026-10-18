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

right most - (m-1 element _minimums_ from preceedings)

mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

ll adie () {
   int n, m;
   cin >> n >> m;

   vi v(n);
   h (i, 0, n) cin >> v[i];


   priority_queue <int> pq;
   ll sum = 0;
   
   h (i, 0, m-1){
      pq.push (v[i]);
      sum += v[i];
   }
   
   ll ans = 1LL * m * v[m-1] - sum;
   
   h (i, m-1, n-1) {
      pq.push(v[i]);
      sum += v[i];

      sum -= pq.top();
      pq.pop();

      ans = max (ans, 1LL * m * v[i+1] - sum);
   }

   // while (! pq.empty()) {
   //    cout << pq.top() << " ";
   //    pq.pop();
   // }

   return ans;

   return 1;
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