#include <iostream>
using namespace std;

int main()
{
   int tt;
   cin >> tt;
   while(tt--){
      int n;
      cin >> n;
      int test;
      int z=0, t=0, o=0;
      for(int i=0;i<n; i++){
         cin >> test;
         if(test%2 == 1){
            o++;
         }else if(test%4==0){
            t++;
         }else{
            z++;
         }
      }
      // cout << z << "  " << t << "  " << o << " ";
      cout << max(z, max(o, t)) << endl;
   }
}

// 2 0
// 1 1
// 0 2