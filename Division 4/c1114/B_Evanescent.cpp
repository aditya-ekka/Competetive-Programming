#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n; string s;
      cin >> n; cin >> s;
      int trim=0;
      for(int i=0; i<s.size()-2; i++){
         if(s[i]==s[i+2] && s[i]!=s[i+1]){
            trim = 2;
            break;
         }
      }
      //
      if(trim == 0){
         for(int i=1; i<s.size()-1; i++){
            if(s[i] != s[i-1] && s[i] != s[i+1]){
               trim = 1;
               break;
            }
         }
      }
      //
      int count=1;
      if(s.size() == 0){
         cout << 0 << endl;
         continue;
      }
      for(int i=0; i<s.size()-1; i++){
         if(s[i] != s[i+1]){
            count++;
         }
      }
      //
      cout << count - trim << endl;      
   }
}