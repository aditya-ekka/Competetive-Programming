#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b, c;
      cin >> a >> b >> c;
      int mxm = max(a, max(b,c));
      int mnm = min(a, min(b,c));
      int mid = a + b + c - mxm - mnm;

      cout << min(mxm-mid, mid-mnm) << endl;
   }
}