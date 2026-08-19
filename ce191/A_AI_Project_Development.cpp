#include <bits/stdc++.h>
using namespace std;

void adie()
{
   int n, x, y, z;
   cin >> n >> x >> y >> z;

   int t1, t2;

   t1 = n / (x+y);
   if (n%(x+y) > 0) t1++;

   t2 = z + ((n - x*z) / (x + 10*y));
   if ((n - x*z) % (x + 10 * y) > 0) t2++;

   cout << min (t1, t2) << endl;
}

int main()
{
   int t;
   cin >> t;
   for(int i=0; i<t; i++)
   {
      adie();
   }
}