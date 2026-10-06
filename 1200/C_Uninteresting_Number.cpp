#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main()
{
   //dp
   vector< set<pair<int, int>> > dp(9);

   for(int i=0; i<9; ++i){
      for(int j=0; j<9; ++j){

         int x = 2*i + j*6 ;
         x %= 9;

         dp[x].insert( make_pair(i, j) );

      }
   }

   //testcase
   int test;
   cin >> test;
   while (test--) {

      string s;
      cin >> s;

      int n = s.size();
      int two = 0;
      int six = 0;
      int sum = 0;

      for (int i=0; i<n; ++i) {
         int x = s[i] - '0';
         
         sum += x;

         if (x == 2) {
            ++two ;
         }

         if (x == 3) {
            ++six;
         }
      }

      sum %= 9;

      if(sum == 0){
         cout << "YES\n";
         continue;
      }
      
      int req = 9 - sum;   
      bool flag = false;

      //checking in dp
      for(auto it = dp[req].begin(); it != dp[req].end(); ++it){
         if ((it->first <= two) && (it->second <= six)) {
            flag = true;
            break;
         }
      }

      string ans = flag ? "YES\n" : "NO\n" ;
      cout << ans ;
   }
   
   return 0;
}