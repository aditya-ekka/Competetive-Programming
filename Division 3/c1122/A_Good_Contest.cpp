#include <iostream>
using namespace std;
int main()
{
   int test;
   cin >>test;
   while(test--){
      int n, a, b, c;
      cin >> n >> a >> b >> c;
      int x = min(a, min(b,c));
      int z = max(a, max(b,c));
      int y = a + b + c - x - z;

      //
      
   }
}