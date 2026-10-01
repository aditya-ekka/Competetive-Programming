#include <iostream>
#include <vector>
#include <forward_list>

using namespace std;
int main(){
   int n, q;
   cin >> n >> q;
   
   vector<int> temp(n);
   for(int i=0; i<n; i++){
      cin >> temp[i];
   }
   forward_list<int> l;
   for(int i=0; i<n; i++){
      l.push_front(temp[n-1-i]);
   }

   vector<int> v(q);
   for(int i=0; i<q; i++){
      cin >> v[i];
   }

   for(int i=0; i<q; ++i){
      auto prev = l.before_begin();
      int idx = 1;
      for(auto it=l.begin(); it!=l.end(); ++it){
         if(*it == v[i]){
            l.erase_after(prev);
            l.push_front(v[i]);
            cout << idx << " ";
            break;
         }
         prev = it;
         ++idx;
      }
   }
   
}