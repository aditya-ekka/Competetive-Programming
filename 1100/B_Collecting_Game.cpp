#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--){
      int n;
      cin >> n;
      vector < pair <int, int>> v(n);
      for(int i=0; i<n; i++){
         int t;
         cin >> t;
         v[i] = make_pair(t, i);
      }

      //sort acc to its value in increasing order
      sort(v.begin(), v.end());

      int presum = 0;
      int j=0;
      int ans[n];
      for( auto &[a, b]: v){
         while(presum <= v[j].first){
            j++;
         }
         if(j<b){
            ans[b] = j; 
         }else{
            ans[b] = j - 1;
         }

         presum += a;
      }
   }
}