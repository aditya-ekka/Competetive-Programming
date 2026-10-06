#include <iostream>
#include<vector>
#include <map>
#include<algorithm>
#define ll long long

using namespace std;

void solve()
{
   int a , b;
   cin >> a >> b;
   int ans=0;
   if(b==1){
      b++;
      ans++;
   }

   while(a > 0){
      a = a/b;
      ans++;
   }

   cout << ans << endl;
}


int main()
{
   int t;
   cin >> t;
   while(t--){
      solve();
   }
   return 0;

}