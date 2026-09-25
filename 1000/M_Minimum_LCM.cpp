#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--)
   {
      int n;
      cin >> n;
      if(n%2==0){
         cout << n/2 << " " << n/2 << "\n";
      }else{
         // int a;
         // if((n/3)%2==0){
         //    if(((2*n)/3) + 1){
         //       a= n / 3 + 1 ;
         //    }else{
         //       a = n/3 - 1;
         //    }
         // }else{
         //    a = n/3;
         // }
         // for(a; a>=1; a-=2){
         //    if((n-a)%a == 0){
         //       cout << a << " "<<n-a << endl;
         //       break;
         //    }
         // }
         

      }
   }
}

/*
   n = a + b;
   a  : 1-> underroot(n)
   opposing number
*/