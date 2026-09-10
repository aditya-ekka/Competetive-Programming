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

      int s=-1, b=0, sb=-1, lastMinusOne=-1, firstMinusOne=-1;
      for(int i=n-1; i>=0; i--){
         if(ar[i]==1) break;
         if(ar[i] == -1){
            lastMinusOne = i;
            break;
         }
      }
      for(int i=0; i<n;i++){
         if(ar[i]==1) break;
         if(ar[i] == -1){
            firstMinusOne = i;
            break;
         }
      }

      for(int i=0; i<n; i++){
         if(s==-1){
            if(ar[i]==1 or ar[i]==-1){
               s = i;
            }
         }else{
            if(ar[i] == 1 or i==lastMinusOne){
               // b = max(i-s, b);
               if( i-s > b){
                  b = i-s;
                  sb = i;
               }
               s = i;
            }
         }
      }

      // for(int i=sb; ar[i] != 1; i++){
      for(int i=0; i<n; i++){
         if(ar[i] == -1){
            ar[i] = 0;
         }
      }

      if(lastMinusOne != -1){
         ar[lastMinusOne] = 1;
      }
      if(firstMinusOne != -1){
         ar[firstMinusOne] = 1;
      }

      for(int i=0; i<n-1; i++){
         cout << ar[i] << " ";
      }
      cout << ar[n-1] << endl;
   }
}

// 2 0
// 1 1
// 0 2