#include <iostream>
#include <climits>
#include <vector>
using namespace std;

/*
int min_in_arr(int ar[], int n){
   int mn=0;
   for(int i=1; i<n; i++){
      if(ar[i] < ar[mn])
         mn = i;
   }
   return mn;
}

int second_min_in_arr(int ar[], int n, int mn){
   int ans = (mn == 0) ? 1 : 0;
   for(int i=0; (i<n) && (i!=mn); i++){
      if(ar[i] < ar[ans])
         ans = i;
   }
   return ans;
}
*/
/*
int brute()
{
   int n, m;
   cin >> n;
   vector <vector <int>> v (n);
   for(int i=0; i<n; i++){
      cin>>m;
      int t;
      for (int j=0; j<m; j++){
         cin >> t;
         v[i].push_back(t);
      }
   }

   bool areSame=false;
   int secMinSum = 0;
   int minDiff=__INT_MAX__;
   int minDiffIndex;
   
   for(int i=0; i<n; i++){
      int id1 = minElement(ar[i], m);
      int id2 = secMinElement(ar[i], m, id1);
      secMinSum += ar[i][id2];
      //
      if(ar[i][id1] == ar[i][id2]){
         areSame = true;
         break;
      }else{
         if(ar[i][id2] - ar[i][id1] < minDiff){
            minDiff = ar[i][id2] - ar[i][id1];
            minDiffIndex = i;
         }
      }
   }
   
   if(areSame){
      return secMinSum;
   }
   
   int id1 = minElement(ar[minDiffIndex], m);
   int id2 = secMinElement(ar[minDiffIndex], m, id1);
   return secMinSum - ar[minDiffIndex][id2] + ar[minDiffIndex][id1];
}
*/

int adie()
{
   int n;
   long long ans=0;
   cin >> n;
   vector< vector<int>> v (n);
   for(int i=0; i<n; i++){
      int m;
      cin >> m;
      vector<int> u(m);
      for(int i=0; i<m; i++){
         cin >> u[i];
      }
      v[i] = u;
   }

   //find array of min, and second minimum element in each array
   int minInArray[n];
   int secMinInArray[n];

   for(int i=0; i<n; i++){
      int mnm = 0;
      for(int j=0; j<v[i].size(); j++){
         if(v[i][j] < v[i][mnm]){
            mnm = j;
         }
      }
      minInArray[i] = mnm;
   }
   for(int i=0; i<n; i++){
      int mnm = minInArray[i]==0 ? 1 : 0;
      for(int j=0; (j<v[i].size()) && (j!=minInArray[i]); j++){
         if(v[i][j] < v[i][mnm]){
            mnm = j;
         }
      }
      secMinInArray[i] = mnm;
   }

   // overall minimum element
   int mnm=0;
   bool duplicate = false;
   for(int i=1; i<n; i++){
      if(v[i][minInArray[i]] == v[i][mnm]){
         duplicate = true;
         if(v[i][secMinInArray[i]] > v[i][secMinInArray[mnm]]){ //
            mnm = i;
            continue;
         }
      }
      if(v[i][minInArray[i]] < v[i][mnm]){
         mnm = i;
      }
   }

   //overall Second min element
   int secMin = 0;
   for(int i=1; (i<n) && (i!=mnm); i++){
      if(v[i][minInArray[i]] == v[i][secMin]){
         if(v[i][secMinInArray[i]] < v[i][secMinInArray[secMin]]){ //
            secMin = i;
            continue;
         }
      }
      if(v[i][minInArray[i]] < v[i][secMin]){
         secMin = i;
      }
   }

   //solve
   if(v[mnm][secMinInArray[mnm]] > v[secMin][minInArray[secMin]]){
      ans += v[mnm][secMinInArray[mnm]] + v[mnm][minInArray[mnm]];
      //sec min ko chorke sabhi arr ke second element add honge
      for(int i=0; (i<n) && (i!=mnm) && (i!=secMin); i++){
         ans += v[i][secMinInArray[i]];
      }
   }else{
      ans += v[mnm][minInArray[mnm]];
      //sabhi arr k second min element add honge
      for(int i=0; (i<n) && (i!=mnm); i++){
         ans += v[i][secMinInArray[i]];
      }
   }

   
   // ans += v[mnm][minInArray[mnm]];

   for(int i=0; i<n; i++){
      cout << v[i][minInArray[i]] << " ";
   } cout << endl;
   for(int i=0; i<n; i++){
      cout << v[i][secMinInArray[i]] << " ";
   } cout << endl;
   return ans;
}

int main()
{
   int t;
   cin >> t;
   while (t--){
      cout << adie() << endl;
   }
}