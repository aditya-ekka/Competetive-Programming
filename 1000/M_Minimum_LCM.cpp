#include <iostream>
#include <math.h>
using namespace std;

void solve()
{
   int n;
      cin >> n;
      if(n%2==0){
         cout << n/2 << " " << n/2 << "\n";
      }else{
         for(int i=2; i*i <= n; ++i){
            if(n%i == 0){
               cout << n/i << " " << n - n/i << endl;
               return;
            }
         }

         cout << 1 << " "<< n-1 << endl;
      }
}

int main()
{
   int test;
   cin >> test;
   while(test--)
   {
      solve();
   }
}

/*
   n = a + b;
   a  : 1-> underroot(n)
   opposing number
*/


//GREATEST DOUBT OF THE CENTURY