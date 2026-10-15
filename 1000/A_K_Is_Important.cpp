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

k-1 * 2
1 4 6 3

5
10
9


ans = 10

1 3 - 10
1 4 - 9
6 3 - 5







1 2 3 4
1 4


2 5 4 8 6 2 5 6 1 5 6 7
              #       #

19
23 #
20
21
19
14 #
17
18
19









mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

ll adie () {
   ll n, k;
   cin >> n >> k;

   vi v(n);
   scan (v);


   ll ans = 0;
   h (i, k-1, n-k+1) ans += v[i];


   int l = k-2;
   int r = n-k+1;

   return r;
   // vi u(2*k - 2);
   // int j = k-1;
   // h (i, 0, k-1) u[i] = v[i];
   // h (i, n-k+1, n) u[k++] = v[i];


   // //sliding window
   
   // ll sum = 0;
   // h(i, 0, k-1) sum += u[i];

   // ll max_sum = sum;
   // h(i, 0, k-1){
   //    sum += v[i + k - 1];
   //    sum -= v[i];
   //    max_sum = max (max_sum, sum);
   // }

   // return ans + max_sum;
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