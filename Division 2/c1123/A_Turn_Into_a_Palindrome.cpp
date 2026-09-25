#include <iostream>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--)
   {
      int n;
      cin >> n;
      char ch;
      cin >> ch;
      string s;
      cin >> s;
      int ans=0;
      for(int i=0; i<n/2; i++){
         if(s[i] != s[n-i-1]){
            if(s[i] != ch){
               ans++;
            }

            if(s[n-i-1] != ch){
               ans++;
            }
         }
      }
      cout << ans << endl;
   }
}