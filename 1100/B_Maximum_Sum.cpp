#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

long long solve()
{
   long long n, k;
   cin >> n >> k;
   
   vector<long long> v(n);
   for(long long i=0; i<n; i++){
      cin >> v[i];
   }
   

   sort(v.begin(), v.end());

   long long ans=0;
   for(long long i=0; i<n-k; ++i){
      ans += v[i];
   }

   long long i=0;
   long long j=n-k;
   long long temp=ans;
   for(long long x=0; x<k; ++x){
      temp = temp + v[j] - v[i] - v[i+1];
      ans = max(ans, temp);

      i += 2;
      j += 1;
      // cout << ans << " ";
   }

   return ans;
}

int main(){
   long long test;
   cin >> test;
   while(test--){
      cout << solve() << endl;
   }
}