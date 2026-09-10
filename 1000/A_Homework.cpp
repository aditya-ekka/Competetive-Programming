#include <iostream>
using namespace std;
int main()
{
   int testcase;
   cin >> testcase;
   while(testcase--){
      int n, m;
      string a, b, c;
      cin >> n >> a >> m >> b >> c;
      for(int i=0; i<m; i++){
         if(c[i]=='V'){
            a = b[i] + a;
         }else{
            a += b[i];
         }
      }

      cout << a << endl;
   }
}