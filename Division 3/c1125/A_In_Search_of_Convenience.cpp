#include <iostream>

using namespace std;

int main() 
{
   int t;
   cin >> t;
   while (t--) {
      int x, y, p;
      cin >> x >> y >> p;
      cout << x + p << " " << y << endl;
   }
}