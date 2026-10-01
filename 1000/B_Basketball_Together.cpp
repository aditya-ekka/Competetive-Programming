#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
   int n, d;
   cin >> n >> d;
   vector<int> v(n);
   for(int i=0; i<n; i++){
      cin >> v[i];
   }

   sort(v.begin(), v.end());

   int i=0, j=n-1;
   int team=0;
   while(j>=i){
      int members = d / v[j];
      if( v[j] * members <= d){
         members++ ;
      }

      if(j-i+1 >= members){
         team++ ;
         j--;
         i += members - 1;
      }else{
         break;
      }
   }

   cout << team;
   return 0;

}