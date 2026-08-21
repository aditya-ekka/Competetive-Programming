#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      n++;
      //check if n is prime -> yes
      bool flag = true;
      for(int i=2; i*i <= n; i++)
      {
         if(n%i == 0){
            flag = false;
            break;
         }
      }
      string s = flag ? "YES" : "NO" ;
      cout << s << endl;
   }
}