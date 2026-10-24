/*
 4 1 5 2 3
 3 5 1 4 2

 1 2 3 4 5
*/

#include <iostream>
#include <vector>

using namespace std;

void brute()
{
   int n, k;
   cin >> n >> k;

   if( (k >= 2*n) || (k<n)){
      cout << "-1\n";
      return;
   }

   vector <vector <int>> ar(n, vector<int>(n, 0));
   // vector<int> f;

   int j = k - n;
   int i;
   for(i=0; i<=j; i++){
      ar[0][i] = i+1;
   }
   for(; i<n; i++){
      ar[i-j][i] = i+1;
   }

   int cnt = n+1;
   for(i=0; i<n; i++){
      for(j=0; j<n; j++){
         if(ar[i][j] == 0){
            ar[i][j] = cnt;
            cnt++;
         }
      }
   }

   for(i=0; i<n; i++){
      for(j=0; j<n; j++){
         cout << ar[i][j] << " ";
      }
      cout << endl;
   }
}

int main(){
   int test;
   cin >> test;
   while (test--)
   {
      brute();
   }
}