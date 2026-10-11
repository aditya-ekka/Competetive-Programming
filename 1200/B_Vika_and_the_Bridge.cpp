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



mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

pair<int, int> largestAndSecondLargest(vector<int>& v) {
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int x : v) {
        if (x >= largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x > secondLargest && x <= largest) {
            secondLargest = x;
        }
    }

    return {largest, secondLargest};
}

int adie () {
   int n, k;
   cin >> n >> k;

   vi v(n);
   scan(v);

   map<int, vector<int>> mp;

   h(i, 1, k+1)  mp[i].pb(0);
   h(i, 0, n)    mp[ v[i] ].pb(i+1);
   h(i, 1, k+1)  mp[i].pb(n+1);

   
   H(it, mp) {
      h (i, 0, it->ss.size() - 1) {
         it->ss [i] = (it->ss[i+1]) - (it->ss[i]) - 1;
      }
      
      it->ss.resize(it->ss.size() - 1);
   }

   // largest and second largest distance ??
   int ans = n;

   H (it, mp) {
      pii p = largestAndSecondLargest (it->ss);

      if (p.ff / 2 <= p.ss) {
         //second is validily obtained
         ans = min (ans, p.ss);
      } else {
         ans = min (ans, p.ff / 2);
      }
   }

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