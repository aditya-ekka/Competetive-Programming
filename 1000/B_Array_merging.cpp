#include <map>
#include <iostream>
using namespace std;

int main()
{
   int test;
   cin >> test;
   while(test--)
   {
      int n;
      cin >> n;
      int a[n], b[n];
      for(int i=0; i<n; i++){
         cin >> a[i];
      }
      for(int i=0; i<n; i++){
         cin >> b[i];
      }

      map <int, int> mp;
      int it=a[0], freq=0;
      for(int i=0; i<n; i++){
         if(it==a[i]){
            freq++;
         }else{
            if(mp.find(it) != mp.end()){
               int x = max(mp[it], freq);
               mp[it] = x;
            }else{
               mp[it] = freq;
            }
            it = a[i];
            freq=1;
         }
      }
      if(mp.find(it) != mp.end()){
         int x = max(mp[it], freq);
         mp[it] = x;
      }else{
         mp[it] = freq;
      }

      map <int, int> mp2;
      it=b[0]; freq=0;
      for(int i=0; i<n; i++){
         if(it==b[i]){
            freq++;
         }else{
            if(mp2.find(it) != mp2.end()){
               int x = max(mp2[it], freq);
               mp2[it] = x;
            }else{
               mp2[it] = freq;
            }
            it = b[i];
            freq=1;
         }
      }
      if(mp2.find(it) != mp2.end()){
         int x = max(mp2[it], freq);
         mp2[it] = x;
      }else{
         mp2[it] = freq;
      }

      int ans=0;
      for(auto [x,y] : mp){
         ans = max(ans, y);
      }
      for(auto [x,y] : mp2){
         ans = max(ans, y);
      }
      for(auto[x,y]: mp){
         if(mp2.find(x) != mp2.end()){
            ans = max(ans, y + mp2[x]);
         }
      }

      // for(auto [x,y] : mp){
      //    cout << x << ":" << y<< " ";
      // }cout << endl;
      // for(auto [x,y] : mp2){
      //    cout << x << ":" << y<< " ";
      // }cout << endl;
      cout << ans << endl;
      // cout << endl;
   }
}