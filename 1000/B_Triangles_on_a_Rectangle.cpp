#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long

using namespace std;

void solve()
{
   int width, height;
   cin >> width >> height;

   int h1, h2, v1, v2;

   cin >> h1;
   vector<int> hor1(h1);
   for(int i=0; i<h1; i++){
      cin >> hor1[i];
   }

   cin >> h2;
   vector<int> hor2(h2);
   for(int i=0; i<h2; i++){
      cin >> hor2[i];
   }

   cin >> v1;
   vector<int> ver1(v1);
   for(int i=0; i<v1; i++){
      cin >> ver1[i];
   }

   cin >> v2;
   vector<int> ver2(v2);
   for(int i=0; i<v2; i++){
      cin >> ver2[i];
   }

   long long ans = max(
      1LL * (hor1[h1-1] - hor1[0]) * height,
      max(
         1LL * (hor2[h2-1] - hor2[0]) * height,
         max(
            1LL * (ver1[v1-1] - ver1[0]) * width,
            1LL * (ver2[v2-1] - ver2[0]) * width
         )
      )
   );

   cout << ans << endl;
}


int main()
{
   int t;
   cin >> t;
   while(t--){
      solve();
   }
   return 0;

}