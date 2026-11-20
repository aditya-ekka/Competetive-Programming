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

vi u(n);
   int finding = 0;
   set<int> st;

   h (i, 0, n) {
      st.insert( v[i] );

      //update what we are finding
      while ( st.find( finding ) != st.end() ) {
         ++finding ;
      }

      u[i] = finding;
   }

mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

void adie () {
   int n, k;
   cin >> n >> k;
   vi v(n);
   scan(v);

   set<int> st;
   
   h (i, 0, n - k + 1)
      st.insert (v[i]);

   int finding = 0; //mex element
   while (st.find (finding) != st.end()) {
      ++finding ;
   }

   if ( finding == n - k + 1) {
      cout << - 1 << nl;
      return;
   }


   int l = max_element( v.begin(), v.begin() + n - k + 1) - v.begin();
   int r = find (v.begin(), v.end(), finding) - v.begin();

   cout << l + 1 << ' ' << r+1 << nl;
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