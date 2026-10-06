#include <iostream>
#include<vector>
#include <map>
#include<algorithm>
#define ll long long

using namespace std;

void solve()
{
   int a, b;
   cin >> a >> b;
   
   int x;
   a--;
   if(a%4==1){
      x = a;
   }else if(a%4==2){
      x = 1;
   }else if(a%4==3){
      x = a + 1;
   }else{
      x = 0;
   }
   a++;

   // cout << x << ": ";
   if(x == b){
      cout << "/ " << a << endl;
   }else if ((x^b) == a){
         cout << (x^b) << " ";
         cout << a + 2 << endl;
   }else{
         cout << ": "<< a + 1 << endl;
   }
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