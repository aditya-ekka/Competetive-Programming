#include <iostream>
using namespace std;
int main()
{
   long long test;
   cin >>test;
   while(test--){
      long long ans=0, a, b, c;
      cin >> a >> b >> c;
      //
      if(max(a+c-b, b-c-a) > max(a-b, b-a)){
         cout << max(a+c-b, b-c-a)<<endl;
      }else{
         cout << max(a-b, b-a)<< endl;
      }

   }
}