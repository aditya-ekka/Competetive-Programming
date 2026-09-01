#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <unordered_set>

#define vi vector<int>
#define pi pair<int, int>

using namespace std;

int seven(int a, int b, int c)
{
   int ans;
   
   if(a == b){
      if(a==c){
         ans = 7;
      }else{
         ans = 3;
      }
   }else if (b == c){
      ans = 6;
   }else if (a == c){
      ans = 5;
   }else{
      ans = 0;
   }

   return ans;
}

int brute()
{
   int n;
   cin >> n;

   vector < pair<int, int>> a (n);
   vector < pair<int, int>> b (n);
   vector < pair<int, int>> c (n);
   
   int t; int i=0;
   for(; i<n/3; i++){
      cin >> t;
      v.push_back({t, i, 1});
   }
   for(; i<2*n/3; i++){
      cin >> t;
      v.push_back({t, i, 2});
   }
   for(; i<n; i++){
      cin >> t;
      v.push_back({t, i, 3});
   }


   sort(v.rbegin(), v.rend());

   int y=-1, z=-1, i=1;
   int work = 

   
      
}

/*
1 2 4
1+2 = 3
1+4 = 5
2+4 = 6
1+2+4 = 7
*/

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      cout << brute() << endl;
   }
}