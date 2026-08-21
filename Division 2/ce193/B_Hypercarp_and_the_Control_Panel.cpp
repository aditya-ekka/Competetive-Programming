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
      int ar[n];
      for(int i=0; i<n; i++){
         cin >> ar[i];
      }

      int ans = 0;
      if(n > 2){
         //aabb
         for(int i=0; i<n-3; i++){
            // cout << "aabb\n";
            if(ar[i] == ar[i+1]){
               //aaxx
               if(ar[i+2] != ar[i]){
                  //aabx
                  if(ar[i+3] == ar[i+2]){
                     ans = 2;
                     break;
                  }
               }
            }
         }
         //aabx
         if(ans == 0)
         {
            // cout << "aabx\n";
            for(int i=0; i<n-2; i++){
               if(ar[i]==ar[i+1]){
                  if(ar[i+2]!=ar[i]){
                     if((i+3 >= n) || (ar[i+3] != ar[i])){
                        ans = 1;
                        break;
                     }
                  }
               }
            }
         }
         //xbaa
         if(ans == 0)
         {
            // cout << "xbaa\n";
            for(int i=1; i<n-1; i++)
            {
               if((n>=3) && (ar[i] == ar[i+1]))
               {
                  if(ar[i-1]!=ar[i]){
                     if((i==1) || (ar[i-2]!=ar[i])){
                        ans = 1;
                        break;
                     }
                  }
               }
            }
         }
      }
      //remove similar elements now
      int count = 1;
      for(int i=1; i<n; i++){
         if(ar[i] != ar[i-1]){
            count++;
         }
      }

      cout << count + ans << endl;
   }
}