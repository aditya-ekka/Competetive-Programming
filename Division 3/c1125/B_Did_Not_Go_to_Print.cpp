#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   string s;

   cin >> n;
   cin >> s;


   vector<bool> v(n, false);
  
   stack <int> st;

   for (int i=0; i<n; ++i) {

      if (s[i] == '1') {

         st.push( i );

      } else if ( s[i] == '2') {

         if (! st.empty()) {
            int x = st.top();
            v[x] = true;
            st.pop();
         } else {
            v[i] = true;
         }

      } else {

         v[i] = true;

      }
   }

   vector <int> ans;
   for(int i=0; i<n; ++i) {
      if ( ! v[i]) {
         ans.push_back(i+1);
      }
   }

   sort (ans.begin(), ans.end());

   cout << ans.size() << endl;
   for(int i=0; i<ans.size(); ++i) {
      cout << ans[i] <<  " ";
   }
   cout << endl;
}

int main() 
{
   int t;
   cin >> t;
   while (t--) {
      solve();
   }
}