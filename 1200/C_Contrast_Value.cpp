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

int signum (bool x) {
   return (x ? 1 : -1);
}

/***wuwuwuwuwuwuwuw NOTE uwuwuwuwuwuwuwuwuwuwuwu



mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

int adie () {
   int n;
   cin >> n; 

   vi v(n);
   scan(v);

   // if (n == 1) return 0; //question ki aisi ki taisi
   //remove duplicates
   vi u;
   u.reserve(n);
   
   u.pb(v[0]);
   h(i, 1, n) {
      if (v[i] != u[u.size()-1]){
         u.pb(v[i]);
      }
   }
   

   if (u.size()==1) return 1;;


   ll ans = 2; //first and last points
   int dir = signum(u[1] > u[0]);

   h (i, 2, u.size()) {
      if (signum(u[i] > u[i-1]) !=  dir) {
         dir *= -1;
         ++ans;
      }
   }

   // print(u);
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