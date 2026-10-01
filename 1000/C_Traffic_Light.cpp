#include <iostream>
using namespace std;

void solve()
{
   int n; char ch; string s;
      cin >> n;
      cin >> ch;
      cin >> s;

      string str = s + s;
      n *= 2;
      //
      if(ch == 'g'){
         cout << 0 << endl;
         return;
      }

      int ans = -1;
      
      for(int i=0; i<n; ++i){
         if(str[i] == ch){
            for(int j=i+1; j<n; j++){
               if(str[j] == 'g'){
                  ans = max (ans, j-i);
                  if(j>=n/2){
                     cout << ans << endl;
                     return;
                  }
                  i = j;
                  break;
               }
            }
         }            
      }

      cout << ans << endl;
}

int main()
{
   int test;
   cin >> test;
   while(test--){
      solve();
   }
}