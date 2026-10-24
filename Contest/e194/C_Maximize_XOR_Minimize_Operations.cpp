#include <iostream>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--){
      int a, b;
      cin >> a >> b;
      
      int ans=a^b, slide=0;
      for(int i=1; i!=a; i++){
         if( ans < (a-i)^(b+1)){
            ans = (a-i)^(b+1);
            slide = i;
         }
      }
      cout << ans << " " << slide << endl;
   }
}