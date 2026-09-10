#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int testcase;
   cin >> testcase;
   while(testcase--){
      long long n;
      cin >> n;

      vector<long long> v;
      long long i=10;
      while(i<n){
         if((n % (i + 1)) == 0){
            v.push_back( n / (i + 1));
         }
         i *= 10;
      }

      cout << v.size() << endl;
      for(i=v.size()-1; i>=0; i--){
         cout << v[i] << " ";
      }
      if(v.size() > 0){
         cout << endl;
      }
   }
}