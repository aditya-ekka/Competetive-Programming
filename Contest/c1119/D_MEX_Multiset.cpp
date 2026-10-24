#include <iostream>
using namespace std;

int main()
{
   int tt;
   cin >> tt;
   while(tt--){
      int n;
      cin >> n;
      int ar[n];
      for(int i=0;i <n; i++){
         cin >> ar[i];
      }

      int cnt=0; int a = -1;
      for(int i=0; i<n; i++){
         if(ar[i] == 0){
            if(a==-1){
               a = i;
            }
            cnt++;
            if(cnt>=2) break;
         }
      }

      if(cnt == 1){
         cout << "NO" << endl;
      }else{
         cout << "YES" << endl;
         if(cnt==0){
            for(int i=0; i<n; i++){
               cout << "A";
            }
         }
         else{
            for(int i=0; i<n; i++){
               if(i==a){
                  cout << "A";
                  continue;
               }
               if(ar[i]==0){
                  cout << "B";
                  continue;
               }
               cout << "C";
            }
         }
         cout << endl;
      }
   }
}
