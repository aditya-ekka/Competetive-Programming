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
#define H(m)         for(auto it=m.begin(); it != m.end(); ++it)

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

/*** 
 * ***/

bool adie () {
   int n, k;
   cin >> n >> k;

   multiset<int> ms;
   int t, largest = -1 * INF;
   h(i, 0, n){
      cin >> t;
      ms.insert(t);
      largest = max(largest, t);
   }

   largest++;

   h(i, 0, largest){
      t = ms.count(i);
      if(t < 2*k) {
         if (t == 2*k - 1){
            return true; //alag alag
         }else{
            return false; //same same
         }
      }
   }

   return false; //same same
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