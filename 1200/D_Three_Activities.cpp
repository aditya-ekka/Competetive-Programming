#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

void input(vector<pair<int,int>>& a, vector<pair<int,int>>& b, vector<pair<int,int>>& c)
{
   int n;
   cin >> n;
   vector <pair <int, int>> v(n);

   for(int i=0; i<n; i++){
      cin >> v[i].first;
      v[i].second = i;
   }
   sort(v.rbegin(), v.rend());
   for(int i=0; i<3; i++){
      a[i].first = v[i].first;
      a[i].second = v[i].second;
   }
   
   for(int i=0; i<n; i++){
      cin >> v[i].first;
      v[i].second = i;
   }
   sort(v.rbegin(), v.rend());
   for(int i=0; i<3; i++){
      b[i].first = v[i].first;
      b[i].second = v[i].second;
   }
   
   for(int i=0; i<n; i++){
      cin >> v[i].first;
      v[i].second = i;
   }
   sort(v.rbegin(), v.rend());
   for(int i=0; i<3; i++){
      c[i].first = v[i].first;
      c[i].second = v[i].second;
   }
   
}

int compare_and_degrade(vector<pair<int,int>>& a, vector<pair<int,int>>&b, int& x, int& y){
   // if((x==3) || (y==3)){
   //    return -1;
   // }
   if(a[x].second == b[y].second){
      if(a[x].first > b[y].first){
         y++;
         return 1;
      }else if(a[x].first == b[y].first){
         if(max(x,y) == 0){
            if(a[x+1].first > b[y+1].first){
               x++;
            }else if(a[x+1].first == b[y+1].first){
               //
               if(a[x+2].first > b[y+2].first){
                  x++;
               }else if(a[x+2].first == b[y+2].first){
                  x++; //can move anything NO THAT WOULD BE WRONG
               }else{
                  y++;
               }
            }else{
               y++;
            }
         }

         // int x1 = x+1, y1 = y+1;
         // int t = compare_and_degrade(a, b, x1, y1);
         // if(t==-1){

         // }
      }else{
         x++;
         return 0;
      }
   }
}

int brute()
{
   vector <pair <int, int>> a(3), b(3), c(3);
   input(a, b, c);

   //6 cases
   // int x=0, y=0, z=0, ans=0;
   /*while(((a[x].second==b[y].second) || (a[x].second==c[z].second) || (b[y].second==c[z].second)) &&
         (x<3) && (y<3) && (z<3))
   {
      compare_and_degrade(a, b, x, y);
      compare_and_degrade(a, c, x, z);
      compare_and_degrade(b, c, y, z);
   }
   */
   /*
   if(a[0].second == b[0].second){
      if((b[0].second == c[0].second)){
         //
      }else{

      }
   }else if (a[0].second == c[0].second){

   }else if (b[0].second == c[0].second){
      if(b[1].second == a[0].second){

      }else{
         
      }
   }else{
      ans = a[0].first + b[0].first + c[0].first;      
   }
   */
   // cout << a[x].first << " " << b[y].first << " " << c[z].first << " ";

   int ans = 0;
   for(int i=0; i<3; i++){
      for(int j=0; j<3;j++){
         for(int k=0; k<3; k++){
            if((a[i].second != b[j].second) &&
            (a[i].second != c[k].second) &&
            (b[j].second != c[k].second)){
               ans = max (ans, a[i].first + b[j].first + c[k].first);
            }
         }
      }
   }
   return ans;
}
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      cout << brute() << endl;
   }
}