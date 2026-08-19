#include <iostream>
using namespace std;
int main()

{
   int t;
   cin >> t;
   while (t--){
      int a, b, c;
      cin >> a >> b >> c;
      int mnm, mxm, mid;
      mnm = min(a, min(b, c));
      mxm = max(a, max(b, c));
      mid = a + b + c - mxm - mnm;
      int range = mxm - mnm;
      if(mnm + mid < mxm){
         mxm = mnm + mid;
         range = mxm - mnm;
      }
      cout << range << endl;
   }
}