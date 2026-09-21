#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--){
      int n, k;
      cin >> n >> k;
      vector < pair<int,int> > v (n);
      int t;
      for(int i=0; i<n; i++){
         cin >> t;
         t = ((t-1)%k) + 1;
         v[i] = make_pair(t, i+1);
      }
      
      sort(v.begin(), v.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
         if (a.first != b.first) return a.first > b.first;   // descending by first
         return a.second < b.second;                        // ascending by second
      });

      for(int i=0; i<n; i++){
         // cout << v[i].first << ":";
         cout << v[i].second << " ";
      }
      cout << endl;
   }
}