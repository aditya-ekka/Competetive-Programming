#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--)
   {
      int n;
      cin >> n;
      vector <int> v(n);
      map<int, int, greater<int> > mp;
      for(int i=0; i<n; i++){
         cin >> v[i];
      }

      sort(v.rbegin(), v.rend());

     for(int i=0; i<n; i++){
         mp[v[i]]++;
      }

      while(mp.size() > 0){
         int largest = mp.begin() -> first;
         int freq = mp.begin() -> second;
         for(int i=0; i<freq; i++){
            cout << largest << " ";
         }
         mp.erase(mp.begin());

         for(auto it=mp.begin(); it != mp.end(); ){
            if((it->second) <= freq){
               for(int i=0; i < it->second; i++){
                  cout << it->first << " ";
               }
               it = mp.erase(it);
            }else{
               for(int i=0; i<freq; i++){
                  cout << it->first << " ";
               }
               it->second = it->second - freq;
               if(it->second < 1){
                  it = mp.erase(it);
               }else{
                  ++it;
               }
            }
         }
      }

      cout << endl;
   }
}

//count frequency in vector
  // int i=0;
      // int j=0, freq=0;
      // while(i<n && j<n){
      //    if(v[j]==v[i]){
      //       freq++;
      //       j++;
      //    }else{
      //       ans.push_back(make_pair(v[i], freq));
      //       //
      //       i=j;
      //       freq=0;          
      //    }
      // }
      // if((i!=j) && (i<n)){
      //     mp.push_back(make_pair(v[i], freq));
      // }
      // 


        //sort ans vector according to freq (stored at ans[i].second) in increasing order and then follow ans[i].first in decreasing order

      // sort(ans.begin(), ans.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
      //    if (a.second != b.second) return a.second < b.second;
      //    return a.first > b.first;
      // });





      // for(auto &[x,y] : ans){
      //    for(i=0;i<y;i++){
      //       cout << x << " ";
      //    }
      // }


      // for(i=0; i<ans.size(); i++){
      //    for(int j=0; j<ans[i].second; j++){
      //       cout << ans[i].first << " ";
      //    }
      // }




