#include <iostream>
#include <map>
#include<vector>
#include<algorithm>
#define ll long long

using namespace std;

void solve()
{
   int n;
   cin >> n;
   // vector< pair<int,vector<int>> > v( n, {0, {}});
   map <int, vector<int> > mp;

   int t;
   for(int i=0; i<n; i++){
      cin >> t;
      mp[t].push_back(i);
   }

   vector<int> v(n);
   for(auto it=mp.begin(); it != mp.end(); ++it)
   {
      if(it->second.size() < 2){
         cout << -1 << endl;
         return;
      }

      v[it->second[0]] = it->second [it->second.size() - 1] + 1 ;

      for(int j=1; j < it->second.size(); ++j){
         v[it->second[j]] = it->second[j-1] + 1;
      }
   }

   for(int i=0; i<n; i++){
      cout << v[i] << " " ;
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