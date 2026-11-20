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

int  adie () {
   int n, k;
   cin >> n >> k;

   string s;
   cin >> s;

   //longest string with all same type
   int i = 0;
   int j = 0;
   int cnt1 = 0;
   int cnt2 = 0;
   int ans = k;

   while (j < n) {
      if (cnt1 < k) {
         if (s[j] == '1') {
            ++cnt1;
            ++j;
         } else {
            ++j;
         }
         ans = max (ans, j - i);
      } else {
         while (s[i] == '0') ++i;
         ++i;
         while (s[i] == '0') ++i;
         --cnt1;
      }
   }
   
   i = 0;
   j = 0;
   while (j < n) {
      if (cnt2 < k) {
         if (s[j] == '0') {
            ++cnt2;
            ++j;
         } else {
            ++j;
         }
         ans = max (ans, j - i);
      } else {
         while (s[i] == '1') ++i;
         ++i;
         while (s[i] == '1') ++i;
         --cnt2;
      }
   }
   
   // return ans;
   return (1LL * ans * (ans + 1) / 2) + 1;
}

long long adie2() {
   int n, k;
   string s;
   cin >> n >> k;
   cin >> s;

   int a = 0;
   h (i, 0, n) {
      if (s[i] == '1') ++a;
   }
   int b = n - a;

   int ans = max(a, b);
   if (min(a, b) < k) ans = n;
   else ans += k;

   int opp = n - ans;

   return 1LL + ((1LL * ans * (ans + 1)) / 2) + ((1LL * opp * (opp + 1)) / 2);
}


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int TC;
   cin >> TC;

   while (TC--){
      cout << adie2() << nl;
   }

   return 0;
}