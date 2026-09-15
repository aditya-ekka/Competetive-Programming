#include <iostream>
using namespace std;
int main()
{
   int test;
   cin >>test;
   while(test--){
      int n;
      cin >> n;
      int t, odd=0;
      for(int i=0; i<n; i++){
         cin >> t;
         if(t==1) odd++;
      }
      odd >= (n+1) / 2 ? cout << "Bessie\n" : cout << "Elsie\n";
   }
}