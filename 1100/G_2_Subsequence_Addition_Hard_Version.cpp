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

for (auto j: s) {
   s.insert (v[i] + j);
} 

but, this snapshot method is better idkwhy! eww

vector<int> sums(s.begin(), s.end());
for(int j : sums) {
   s.insert(v[i] + j);
}

----

 unordered_set<int> s;
   if (v[0] != 1) return false;
   s.insert(1);

   h (i, 1, n) {

      if (s.find (v[i]) == s.end()) {
         return false;
      }

      

      s.insert(v[i]);
   }

mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

bool adie () {
   int n;
   cin >> n;
   vi v(n);
   scan(v);

   sort(all(v));

   if (v[0] != 1) return false;

   vi u(1, 1);
   u.reserve(n);

   h (i, 1, n) {
      bool flag = true;
      h (j, 0, u.size()) {
         if (v[i] == u[j]) {
            flag = false;
            break;
         }
      }
      if (flag) return false;

      h (j, 0, u.size()) {
         u.pb( v[i] + u[j] );
      }

      u.pb (v[i]) ;
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