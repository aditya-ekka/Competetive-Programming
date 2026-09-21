#include <map>
#include <iostream>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;

      map <int, int> a;
      int key=-1, t, freq=1;
      for(int i=0; i<n; i++){
         cin >> t;
         if(t == key){
            freq++;
            if(i==n-1){
               if(a.find(t) != a.end()){
                  int temp_2 = a[key];
                  a[key] = max(freq, temp_2);
                  // a[5] = 1;
               }else{
                  a[key] = freq;
               }
            }
         }else{
            if(a.find(t) != a.end()){
               int temp_2 = a[key];
               a[key] = max(freq, temp_2);
               // a[5] = 1;
            }else{
               a[key] = freq;
            }
            //
            key = t;
            freq = 1;
         }
      }

      map <int, int> b;
      key=-1, freq=1;
      for(int i=0; i<n; i++){
         cin >> t;
         if(t == key){
            freq++;
            if(i==n-1){
               if(b.find(t) != b.end()){
                  int temp_2 = b[key];
                  b[key] = max(freq, temp_2);
                  // a[5] = 1;
               }else{
                  b[key] = freq;
               }
            }
         }else{
            if(b.find(t) != b.end()){
               int temp_2 = b[key];
               b[key] = max(freq, temp_2);
               // a[5] = 1;
            }else{
               b[key] = freq;
            }
            //
            key = t;
            freq = 1;
         }
      }
   
      //
      for(auto it:a){
         cout << it.first << ":" << it.second << " ";
      }cout << endl;
      for(auto it:b){
         cout << it.first << ":" << it.second << " ";
      }cout << endl;
      //

      int ans=0;
      for(auto it:a){
         if((it.first != -1
         ) && (b.find(it.first) != b.end())){
            ans = max (ans, it.second + b[it.first]);
         }else{
            ans = max (ans, it.second);
         }
         cout << ans << " ";
      }
      for(auto it:b){
         if((it.first!=-1) && (a.find(it.first) != a.end())){
            ans = max (ans, it.second + a[it.first]);
         }else{
            ans = max (ans, it.second);
         }
         cout << ans << " ";
      }

      cout << ans << endl;
   }
   return 0;
}