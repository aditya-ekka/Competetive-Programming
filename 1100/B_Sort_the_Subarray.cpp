#include <iostream>
using namespace std;

void brute()
{
   int n;
   cin >> n;
   int a[n], b[n];
   for(int i=0; i<n; i++) cin >> a[i];
   for(int i=0; i<n; i++) cin >> b[i];

   //FIRST ELEMENT THAT DOESN'T MATCHES
   int l=0, r = n-1;
   for(int i=0; i<n; i++){
      if(a[i] != b[i]){
         l = i;
         break;
      }
   }
   for(int i=n-1; i>=0; i--){
      if(a[i] != b[i]){
         r = i;
         break;
      }
   }

   // cout << l+1 << " " << r+1 << endl;
   
   int mnm=b[l], mxm=b[r];
   // cout << mxm << " " << mnm << endl;

   for(int i=r+1; i<n; i++){
      if(a[i] >= mxm){
         mxm = a[i];
         r++;
      }else{
         break;
      }
   }
   for(int i=l-1; i>=0; i--){
      if(a[i] <= mnm){
         mnm = a[i];
         l--;
      }else{
         break;
      }
   }

   l = max(l, 0);
   r = min(r, n-1);
   cout << l+1 << " " << r+1 << endl;
}

int main()
{
   int t;
   cin >> t;
   while(t--){
      brute();
   }
}