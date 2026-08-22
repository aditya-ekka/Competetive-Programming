#include <iostream>
#include <algorithm>
using namespace std;

void brute()
{
   long long  n, x, h;
   cin >> n >> x;
   long long  ar[n];
   for(long long  i=0; i<n; i++) cin >> ar[i];

   if(n==1){
      cout << x + ar[0] << endl;
      return;
   }

   sort(ar, ar+n);
   long long  i=0, sum=0;

   while (i<n-1){
      i++;
      sum += i * (ar[i] - ar[i-1]);
      // cout << sum << " " ;
      if(sum > x){
         sum -= i * (ar[i] - ar[i-1]);
         i--;
         break;
      }
   }

   if(i==0) i=1;

   h = ar[i];
   if(x>sum){
      h += (x-sum) / i;
   }

   cout << ar[i] << " " <<  h << endl;
   cout << endl;
}

int  main()
{
   long long  t;
   cin >> t;
   while (t--)
   {
      brute();
   }
}