#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      int ar[n];
      for(int i=0; i<n; i++) cin >> ar[i];
      //
      int f[1001];
      for(int i=0; i<1001; i++)
      {
         f[i] = 0;
      }
      for(int i=0; i<n; i++)
      {
         f[ar[i]]++ ;
      }
      int mxm = f[0];
      for(int i=0; i<1001; i++)
      {
         mxm = max(mxm, f[i]);
      }

      int sum=0;
      for(int i=0; i<n; i++)
      {
         if(ar[i] != mxm) sum++;
      }
      if(mxm > n/2)
      {
         cout << sum + mxm << endl;
      }
     else
     {
      
     } 

   }
}