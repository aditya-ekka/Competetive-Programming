#include <iostream>
#include <climits>
#include <vector>

using namespace std;


int minElement(int ar[], int n){
   int mn=0;
   for(int i=1; i<n; i++){
      if(ar[i] < ar[mn])
         mn = i;
   }
   return mn;
}

int secMinElement(int ar[], int n, int mn){
   int ans = (mn == 0) ? 1 : 0;
   for(int i=0; (i<n) && (i!=mn); i++){
      if(ar[i] < ar[ans])
         ans = i;
   }
   return ans;
}


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

int main()
{
   int t;
   cin >> t;
   while (t--){
      cout << brute() << endl;
   }
}