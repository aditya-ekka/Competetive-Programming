#include <iostream>

using namespace std;

int solve()
{
   int d;
   cin >> d;
   
   int a = 1 + d;
   int b = a + d;
   cout << 1 << ' '<< a << ' '<< b << ' ' ;+
   return a * b;
}


int main()
{
   int t;
   cin >> t;
   while(t--){
      cout << solve() << endl;
   }
   return 0;

}