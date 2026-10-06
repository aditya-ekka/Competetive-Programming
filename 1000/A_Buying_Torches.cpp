#include <iostream>

using namespace std;

void solve()
{
   long long x, y, z;
   cin >> x >> y >> z;

   long long op = z * (y + 1);

   if((op % (x - 1)) == 0){
      op /= x-1;
   }else{
      // op /= x-1;
      // ++op;
   }

   cout << op << endl;
}


int main()
{
   int t;
   cin >> t;
   while(t--){
      solve();
   }
   return 0;

}