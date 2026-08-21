#include <iostream>
using namespace std;

void brute()
{
   int n, m;
   cin >> n >> m;
   int ar[n][m];
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cin >> ar[i][j];
      }
   }

   int mnm = ar[0][0]*ar[0][0];
   int sum = 0;
   bool flag = true;
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         int t = ar[i][j];
         if (t < 0){
            t *= -1;
            flag = !(flag);
         }
         mnm = min (t, mnm);
         sum += t;
      }
   }

   int ans = sum;
   if ((! flag) && (mnm != 0)){
      ans -= mnm*2;
   }

   cout << ans << endl;
}

int main()
{
   int t;
   cin >> t;
   while (t--){
      brute();
   }
}