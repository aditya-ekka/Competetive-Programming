#include<iostream>
#include<utility>
#include<climits>
#include<vector>

using namespace std;

long long solve()
{
   long long n, k, a, b;
   cin >> n >> k >> a >> b;

   vector< pair<long long, long long> > v(n);

   long long x, y;
   for(long long i=0; i<n; ++i){
      cin >> x >> y;
      v[i] = make_pair(x, y);
   }


   a--;
   b--;


   //actual distance
   long long x_dis = llabs(v[b].second - v[a].second);
   long long y_dis = llabs(v[b].first - v[a].first);

   long long distance = x_dis + y_dis;

   if(k<=1){
      return distance;
   }

   //through closest major city
   long long dist_A = LLONG_MAX;
   long long dist_B = LLONG_MAX;
   
   for(long long i=0; i<k; ++i){
      //from A
      x_dis = llabs(v[i].first - v[a].first);
      y_dis = llabs(v[i].second - v[a].second);

      dist_A = min(x_dis + y_dis, dist_A);
      
      //from B
      x_dis = llabs(v[i].first - v[b].first);
      y_dis = llabs(v[i].second - v[b].second);

      dist_B = min(x_dis + y_dis, dist_B);
   }

   
   //final comparision
   long long AB = dist_A + dist_B;
   distance = min(AB, distance);

   return distance;
}

int main()
{
   long long test;
   cin >> test;
   while(test--){
      cout << solve() << endl;
   }
}