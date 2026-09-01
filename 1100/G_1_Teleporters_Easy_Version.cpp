#include <iostream>
#include <algorithm>

using namespace std;

int brute()
{
   int n, c;
   cin >> n >> c;
   int ar[n];
   for(int i=0; i<n; i++){
      cin >> ar[i];
      ar[i] += i + 1;
   }

   sort(ar, ar+n);

   int ans = 0;

   for(int i=0; i<n && c > 0 ; i++){
      if(c >= ar[i]){
         c -= ar[i];
         ans++ ;
      }else{
         break;
      }
   }

   return ans;
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      cout << brute() << endl;
   }
}