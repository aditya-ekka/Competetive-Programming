#include <iostream>
#include<vector>
#include <map>
#include<algorithm>
#define ll long long

using namespace std;

void solve()
{
   int n;
   cin >> n;
   
   int t;
   multimap <int,int, greater<int>> mp;
   for(int i=0; i<n; i++){
      cin >> t;
      // mp[t] = i;
      mp.insert({t, i});
   }

   
   long long visit=0;

   vector<int> ans(n+1);
   ans[0] = 0;
   int i=1;
   for(auto &[x, y] : mp){
      ans[y+1] = i;

      //update visit
      t = i;
      if(t<0) t *= -1;
      visit += 2LL * x * t;

      //variable update
      i *= -1;
      if(i>0) ++i;
   }



   cout << visit << endl;

   for(auto &it: ans){
      cout << it <<  " ";
   }
   cout << endl;
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