#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;


   int l, r;
   for (int i=1; i<n; ++i){
      if(s[i] < s[i-1]){
         cout << "YES\n";
         cout << i << " " << i+1 << endl;
         return 0;
      }
   }
   cout << "NO\n"; 
}