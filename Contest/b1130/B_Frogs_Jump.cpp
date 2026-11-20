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

1
3
fff
ofo


mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

int adie () {
   int n;
   cin >> n;
   string a, b;
   cin >> a >> b;

   int last_u = -2;
   int last_l = -2;

   int cnt_u = 0;
   int cnt_l = 0;

   int protection = 0;

   h (i, 0, n) {
      if (a[i] == 'f' && b[i] == 'f') {
         ++protection ;
      }

      if (a[i] == 'f' && b[i] == 'o') {
         if (last_u == i - 1) {
            --cnt_u ;
         } else {
            ++cnt_u ;
            last_u = i;
         }
      }

      if (a[i] == 'o' && b[i] == 'f') {
         if (last_l == i - 1) {
            --cnt_l;
         } else {
            ++cnt_l ;
            last_l = i;
         }
      }
   }

   return abs(abs (cnt_u - cnt_l) - protection);
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