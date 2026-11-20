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

what am I so fucked up!!!!!!

mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

bool adie () {
   string a, b;
   cin >> a >> b;

   vi v(b.size());
   set <char> s;

   int i = 0; //iterate on a 
   int j = 0; //iterate on b

   while (i < a.size()) {
      while (a[i] != b[j]) {
         if ( s.find(a[i]) != s.end()) {
            ++i;
         } else {
            //a[i] is already present in set
            --j;
            while (j > 0 && v[j] != a[i]) {
               s.erase( v[j] );
               --j;
            }
         }
      }

      v[j] = i;
      s.insert(b[j]);
      ++i;
      ++j;
   }
}



int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int TC;
   cin >> TC;

   while (TC--){
      print(adie());
   }

   return 0;
}