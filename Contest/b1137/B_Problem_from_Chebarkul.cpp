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

every element will have arena of n - k + 1 size
from l [l: 0 to k-1] to  r [r: n-k-1 to n-1]

common zone e = k-1 to n-k 


mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

int brute2(int n, int k) {
   vi v(n);
   scan(v);


   int ans = 0;
   int e = v[  k - 1  ];

   for (int i = k; i <= n-k; ++i) {
      if (v[i] != e) return 0;
   }

   if (k == 1) return 1;


   for (int i = n-k+1; i < n; ++i) {
      if (v[i] == e) ++ans;
      else break;
   }

   // cout << ans << ' ';

   for (int i = k - 2; i >= 0; --i) {
      if (v[i] == e) ++ans;
      else break;
   }

   return ans;
}


int brute (int n, int k) {
   vi v(n);
   scan(v);

   int ans = 0;

   for (int i=0; i<k; ++i) {
      bool flag = true; //k-i
      for (int j=i+1; j<=n-k+i; ++j) {
         if (v[j] != v[j-1]) {
            flag = false;
            break;
         }
      }

      if (flag) ++ans;
   }

   return ans;
}

int brute_and_brute2() {
   int n, k;
   cin >> n >> k;

   if (k - 1 < n - k) 
      return brute2(n, k);
   else
      return brute(n, k);
}

int adie() {
   //SLIDING WINDOW
   int n, k;
   cin >> n >> k;
   vi v(n);
   scan (v);

   int ans = 0, wsize = n - k + 1, run = 0;

   for (int i=0; i<n; ++i) {
      if (i > 0 && v[i] == v[i - 1])
         ++run;
      else
         run = 1;
      
      if (run >= wsize) ++ans;
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