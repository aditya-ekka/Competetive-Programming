#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve()
{
   long long n, q;
   cin >> n >> q;
   long long a[n], b[q];
   for(long long i=0; i<n; ++i){
      cin >> a[i];
   }
   for(long long i=0; i<q; ++i){
      cin >> b[i];
   }

   vector<long long> aalu;
   int maximum = __INT_MAX__;
   for(long long i=0; i<q; ++i){
      if(b[i] < maximum){
         aalu.push_back(b[i]);
         maximum = b[i];
      }
   }


   for(long long i=0; i<n; ++i){
      //a[i]
      for(long long j=0; j<aalu.size(); ++j){
         //b[i]

            if(((a[i] >> aalu[j]) << aalu[j]) == a[i]){ //is divisible
               a[i] += (1 << (aalu[j]-1));
            }
      }
   }

   for(auto i:a){
      cout << i << " ";
   }
   cout << endl;
}

int main()
{
   long long test;
   cin >> test;
   while(test--){
      solve();
   }
}