#include <iostream>
#include <vector>

using namespace std;

bool solve()
{
   int n, x;
   cin >> n >> x;

   vector<int> a(n), b(n), c(n);
   for(int i=0; i<n; ++i){
      cin >> a[i];
   }
   for(int i=0; i<n; ++i){
      cin >> b[i];
   }
   for(int i=0; i<n; ++i){
      cin >> c[i];
   }

   int i=0, j=0, k=0;
   int ans=0;

   while((i<n)){
      if(ans == x){
         return true;
      }
      if((a[i] | x) == x){
         ans = (ans | a[i]);
         ++i;
      }else{
         break;
      }
   }

   while((j<n)){
      if(ans == x){
         return true;
      }
      if((b[j] | x) == x){
         ans = (ans | b[j]);
         ++j;
      }else{
         break;
      }
   }

   while((k<n)){
      if(ans == x){
         return true;
      }
      if((c[k] | x) == x){
         ans = (ans | c[k]);
         ++k;
      }else{
         break;
      }
   }

   if(ans == x){
      return true;
   }

   return false;
}

int main()
{
   int test;
   cin >> test;
   while(test--){
      string s = solve() ? "Yes\n" : "No\n";
      cout << s;
   }
   return 0;
}