#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void adie()
{
   int n;
   cin >> n;
   vector<int> ar[n];
   for (int i=0; i<n; i++){
      cin >> ar[i];
   }

   int car[n];
   for(int i=0; i<n; i++)
   {
      car[i] = ar[i];
   }
   
   int j = car[0];
   vector <int> typ;    /////////
   typ.push_back(j);
   for(int i=0; i<n; i++){
      if(car[i]!= j){
         j=car[i];
         typ.push_back(j);
      }
   }

   int m = typ.size();
   int count_broke=0;

   for(int i=0; i<m; i++){
            
   }
   
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      adie();
   }
}