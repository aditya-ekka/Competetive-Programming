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
   cout << (x ? "Moggity\n" : "Larpity\n");
}

/***wuwuwuwuwuwuwuw NOTE uwuwuwuwuwuwuwuwuwuwuwu

0 1 x=0
x=0 1 0

eg. 1 1 1

code comment
----------------------------------
// .0 1 0
      sum = (v[0] & 1);
      h (i, 1, n-1) {
         if (((sum & 1) == 0) && ((v[i] & 1) == 1)) {
            return true;
         }
         sum += (v[i] & 1);
      }

 // 0 1 0.
      sum = (v[n-1] & 1);
      hr (i, n-2, 1) {
         if (((sum&1) == 0) && ((v[i] & 1) == 1)) {
            return true;
         }
         sum += (v[i] & 1);
      }

mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

bool adie () {
   int n;
   cin >> n;
   vi v(n);
   scan(v);

   ll sum = 0;
   h (i, 0, n) {
      sum += (v[i] & 1) ;
   }

   if ((sum & 1) == 0) {
      return true;
   } else {

      if (n==1) return true;

      if (n==2) return false;

// n >= 3

      // 0 1 x=0
      if(
         ((v[0] & 1) == 0)
         &&
         ((v[1] & 1) == 1)
      ) {
         return true;
      }

      // x=0 1 0
      if (
         ((v[n-1] & 1) == 0)
         &&
         ((v[n-2] & 1) == 1)
      ) {
         return true;
      }

      if (n > 3) {
         // 1 1 1 x=0
         if (
            ((v[0] & 1) == 1)
            &&
            ((v[1] & 1) == 1)
            &&
            ((v[2] & 1) == 1)
         ) {
            return true;
         }

         // x=0 1 1 1
         if (
            ((v[n-1] & 1) == 1)
            &&
            ((v[n-2] & 1) == 1)
            &&
            ((v[n-3] & 1) == 1)
         ) {
            return true;
         }
      }

      return false;
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