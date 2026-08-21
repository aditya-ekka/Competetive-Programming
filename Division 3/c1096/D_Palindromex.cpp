#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void adie()
{
   int n;
   cin >> n;
   vector<int> arr(2*n);
   int l=-1, r=-1;
   for(int i=0; i<2*n; i++){
       cin >> arr[i];
       if(arr[i]==0){
            if(l==-1) l=i;
            else r=i;
       }
   }

   auto mex = [&](const vector<int> &vals){
       vector<char> seen(n+2, 0);
       for(int x : vals){
           if(x >= 0 && x <= n) seen[x] = 1;
       }
       int m = 0;
       while(seen[m]) m++;
       return m;
   };

   int idx;
   vector<int> v1;
   idx = 0;
   while(l-idx>=0 && l+idx<2*n && arr[l-idx] == arr[l+idx])
   {
      v1.push_back(arr[l-idx]);
      idx++;
   }
   int a1 = mex(v1);
 
   vector<int> v2;
   idx = 0;
   while(r-idx>=0 && r+idx<2*n && arr[r-idx] == arr[r+idx])
   {
      v2.push_back(arr[r-idx]);
      idx++;
   }
   int a2 = mex(v2);

   vector<int> v3;
   int mid = (l+r)/2;
   idx = 0;
   if((r-l) % 2 == 0) // odd number in between
   {
      while(mid-idx>=0 && mid+idx<2*n && arr[mid-idx] == arr[mid+idx])
      {
         v3.push_back(arr[mid-idx]);
         idx++;
      }
   }else{   // even number in between
      while(mid-idx>=0 && mid+1+idx<2*n && arr[mid-idx] == arr[mid+1+idx])
      {
         v3.push_back(arr[mid-idx]);
         idx++;
      }
   }
   int a3 = mex(v3);

   int ans = max(a1, max(a2, a3));
   cout << ans << endl;

}



int main()
{
    int _t;
    cin >> _t;
    while(_t--){
        adie();
    }
}
