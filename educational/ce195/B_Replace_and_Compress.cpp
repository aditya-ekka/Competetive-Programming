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

001011010 0101010
000011010 01010
001111010 01010
001011110 01010
001011000 01010

UNIQUE //

auto it = unique ( s.begin(), s.end());
s = string (s.begin(), it);

mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

int adie () {
   string s;
   cin >> s;

   int n = s.size();

   
   //count removal of duplicates
   int a=0;

   int i = 0;
   int j = 1; //exclusive

   while (j < n) {
      if (s[j] == s[i]) {
         ++j ;
      } else {
         a += max (j - i - 3, 0);
         i = j;
         j = i+1;         
      }
   }
   a += max (j - i - 3, 0);

   //count real ones (all, including duplicates)
   int b = 1;
   h (i, 1, n-1) {
      if (s[i-1] == s[i+1]){
         ++b;
      }
   }

   cout << a <<' '<< b << " : ";
   return b - a;
}

int brute() {
   string s;
   cin >> s;

   set<string> st;
   string temp = s;
   auto it = unique (temp.begin(), temp.end());
   temp = string (temp.begin(), it);
   st.insert (temp);
   h (i, 1, s.size() - 1) {
      temp = s;
      temp[i] = (temp[i] == '1' ? '0' : '1');
      auto it = unique (temp.begin(), temp.end());
      temp = string (temp.begin(), it);
      st.insert (temp);
   }

   return st.size();
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