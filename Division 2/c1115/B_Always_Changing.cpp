#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      string s;
      cin >> s;
      
      //check if solution is possible
      int zeros = 0;
      for(char ch : s){
         if( ch == '0'){
            zeros++ ;
         }
      }

      if ( max(zeros, n-zeros) - min(zeros, n-zeros) > 2){
         cout << -1 << endl;
         continue;
      }
      
      //count zeros sitting together
      int z = 0, o = 0;
      char ch=s[0];
      for (int i=1; i<n; i++)
      { 
         if(s[i] == ch){
            ch == '1' ? o++ : z++;
         }else{
            ch = s[i];
         }
      }

      int ans = z == o ? z*2 : max(z, o) * 2 - 1;
      // if (ans < 0) ans = 0;
      cout << ans << endl;
   }
}