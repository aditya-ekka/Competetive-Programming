#include<bits/stdc++.h>
using namespace std;

using ll  = long long;
using vi  = vector <ll>;
using vll = vector <ll>;
using pii = pair <ll, ll>;
using pll = pair <ll, ll>;
using mii = map <ll, ll>;
using mll = map <ll, ll>;

#define all(x)       (x).begin(), (x).end()
#define rall(x)      (x).rbegin(), (x).rend()
#define h(i, a, b)   for(ll i=a; i<b; ++i)
#define hr(i, a, b)  for(ll i=a; i>=b; --i)
#define H(it, m)     for(auto it=m.begin(); it != m.end(); ++it)

#define pb emplace_back
#define ff first
#define ss second

constexpr ll INF = 1e9;
constexpr ll MOD = 1e9 + 7;
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
   cout << (x ? "Alice\n" : "Bob\n");
}

/***wuwuwuwuwuwuwuw NOTE uwuwuwuwuwuwuwuwuwuwuwu
 


mnmnmnmnmnmnmnmnm CODE HERE nmnmnmnmnmnmnmnmnmnmnm***/

ll N = 1e6 + 1;
vector<bool> prime(N, true);
vi prime_no; //continuous seqeunce of primes

bool adie () {
   ll n;
   cin >> n;
   vi v(n);
   scan(v);

   bool all_inc = true;
   h (i, 1, n) {
      if (v[i-1] > v[i]) {
         all_inc = false;
         break;
      }
   }

   if (all_inc) return false;

   // logical part of the code
   vi u(n);

   h (i, 0, n) {
      if (prime[ v[i] ]) {
         u[i] = v[i]; 
         continue;
      }

      ll factor;
      ll j = 0;

      for (; prime_no[j] < v[i]; ++j) {
         if (v[i] % prime_no[j] == 0) {
            factor = prime_no[j];
            
            int other = v[i] / factor;
            if (prime[other] &&
               (other != factor))
               return true;
            break;
         }
      }

      for (++j; prime_no[j] < v[i]; ++j) {
         if (v[i] % prime_no[j] == 0) {
            // print(u);
            return true;
         }
      }

      u[i] = factor;
   }

   // print(u);
   //I think now all of those factors are primes only
   h (i, 1, n) {
      if (u[i-1] > u[i]) return true;
   }

   return false;
}


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll TC;
   cin >> TC;

   //prime numbers
   prime_no.reserve(N);

   h (i, 2, N) {
      if (prime[i]) {
         prime_no.pb(i);

         for (ll j=i*2; j<N; j+=i) {
            prime[j] = false;
         }
      }
   }
   

   while (TC--){
      print(adie());
   }

   return 0;
}

/*
//code previous version

#include<bits/stdc++.h>
using namespace std;

using ll  = long long;
using vi  = vector <ll>;
using vll = vector <ll>;
using pii = pair <ll, ll>;
using pll = pair <ll, ll>;
using mii = map <ll, ll>;
using mll = map <ll, ll>;

#define all(x)       (x).begin(), (x).end()
#define rall(x)      (x).rbegin(), (x).rend()
#define h(i, a, b)   for(ll i=a; i<b; ++i)
#define hr(i, a, b)  for(ll i=a; i>=b; --i)
#define H(it, m)     for(auto it=m.begin(); it != m.end(); ++it)

#define pb emplace_back
#define ff first
#define ss second

constexpr ll INF = 1e9;
constexpr ll MOD = 1e9 + 7;
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
   cout << (x ? "Alice\n" : "Bob\n");
}

ll N = 1e6 + 1;
vector<bool> prime(N, true);
vi prime_no; //continuous seqeunce of primes

bool adie () {
   ll n;
   cin >> n;
   vi v(n);
   scan(v);

   bool all_inc = true;
   h (i, 1, n) {
      if (v[i-1] > v[i]) {
         all_inc = false;
         break;
      }
   }

   if (all_inc) return false;

   // logical part of the code
   vi u(n, -1);

   h (i, 0, n) {
      if (prime[ v[i] ]) {
         u[i] = v[i];
         continue;
      }

      ll factors = 0;
      ll factor = -1;
      ll j = 0;

      for (; 1LL * prime_no[j] * prime_no[j] < v[i]; ++j) {
         if (v[i] % prime_no[j] == 0) {
            factor = prime_no[j];
            ++factors;
            if (prime[ v[i] / prime_no[j] ])
               return true;
         }

         if (factors == 2) return true;
      }

      if (factors == 1) {
         u[i] = factor;
         continue;
      }

      u[i] = prime_no[j]; //idk
   }

   //I think now all of those factors are primes only
   h (i, 1, n) {
      if (u[i-1] > u[i]) return true;
   }

   return false;
}


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll TC;
   cin >> TC;

   //prime numbers
   prime_no.reserve(N);

   h (i, 2, N) {
      if (prime[i]) {
         prime_no.pb(i);

         for (ll j=i*2; j<N; j+=i) {
            prime[j] = false;
         }
      }
   }
   

   while (TC--){
      print(adie());
   }

   return 0;
}
*/