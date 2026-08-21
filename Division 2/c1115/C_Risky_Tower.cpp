#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

void merge (vector<int>& a, vector<int>& b){
   int n = a.size();
   int j=0, k=0, ar[n];
   for(int i=0; i<n; i++){
      if(a[j] > b[k]){
         ar[i] = a[j];
         j++;
      }else{
         ar[i] = b[k];
         k++;
      }
   }
   //
   for(int i=0; i<n; i++){
      a[i] = ar[i];
   }
}

void printv(vector<vector<int>> v){
   for(int i=0; i<v.size(); i++){
      for(int j=0; j<v[0].size(); j++){
         cout << v[i][j] << " ";
      }
      cout << "\n";
   }
   cout << "\n";
}

int main()
{
   int t;
   cin >> t;
   while(t--){
      int n, m;
      cin >> n >> m;

      //stability array
      vector<int> stability(n);
      for(int i=0; i<n; i++){
         cin >> stability[i];
      }

      vector<int> min_stable(n);
      int mnm = stability[0];
      for(int i=0; i<n; i++){
         mnm = min(mnm, stability[i]);
         min_stable[i] = mnm;
      }
      
      //vector input
      vector<vector<int>> ar(n, vector<int>(m));
      
      for(int i=0; i<n; i++){
         vector<int> temp(m);
         for (int j=0; j<m; j++){
            cin >> temp[j];
         }
      
         sort(temp.rbegin(), temp.rend());
         
         ar[i] = temp;
      }
      
      //solution by merge sort technique
      int ans=m;
      int sum;
      vector<int> sol(m, 0);

      for(int i=n-1; i>=0; i--){
         merge(sol, ar[i]);
         
         sum = 0;
         for(int j=0; j<m; j++){
            if(sum < min_stable[i]){
               sum += sol[j];
            }else{
               ans = min(ans, j);
               break;
            }
         }
      }

      cout << ans << endl;
   }
}