#include <iostream>
#include <vector>
#include <numeric>
#define ll long long

using namespace std;

long long solve ()
{
   int n;
   cin >> n;
   vector<long long> v(n);
   for (int i=0; i < n; ++i) {
      cin >> v[i];
   }



   ll hcf = v[1];

   for (int i=1; i<n; i += 2) {
      hcf = gcd (hcf, v[i]);
   }

   bool flag = true;   
   for (int i=0; i<n; i += 2) {
      if (v[i] % hcf == 0) {
         flag = false;
         break;
      }
   }

   if (flag) {
      return hcf;
   }
   

   
   ll hcf2 = v[0];
   for (int i=0; i<n; i += 2) {
      hcf2 = gcd (hcf2, v[i]);
   }
   
   flag = true;
   for (int i=1; i<n; i += 2) {
      if (v[i] % hcf2 == 0) {
         flag = false;
         break;
      }
   }

   if (flag) {
      return hcf2;
   }



   return 0;
}

int main ()
{
   int test;
   cin >> test;
   while (test--) {
      cout << solve () << endl;
   }
}