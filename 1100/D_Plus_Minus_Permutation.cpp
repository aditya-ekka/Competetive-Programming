#include<iostream>
#include<math.h>
#include <numeric>
using namespace std;
int main()
{
   long long test;
   cin >> test;
   while(test--){
      long long n, x, y;
      cin >> n >> x >> y;
      long long x_element = n / x,
                y_element = n / y,
                common = n / ((x/gcd(x, y)) * y);

      x_element -= common;
      y_element -= common;

      long long x_sum = (n * (n+1) / 2) - ((n - x_element) * (n - x_element + 1) / 2),
                y_sum = y_element * (y_element + 1) / 2 ;
      
      cout << x_sum - y_sum << endl;
   }
}