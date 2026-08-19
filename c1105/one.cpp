#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k;
      cin >> n >> k;
      int i=0; long long sum=0;
      while(sum < n)
      {  
         i++;
         sum += k*(pow(2,i));
      }
      sum -= k*(pow(2,i));
      cout << sum << " ";
      //how much extra can still be managed to add in only some of these elements
      sum = n - sum;
      cout << sum << " " ;
      int j = sum / (pow(2,i+1));
      
      cout << i << " " << j << " " ;
      cout << (i*k) + j << endl;
   }
}