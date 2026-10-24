#include <bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--)
   {
      int n, k;
      cin >> n >> k;
      long long ans = 0;
      ans = pow(2,n-k+1) + (2*(k-1));
      cout << ans << endl;
   }
}