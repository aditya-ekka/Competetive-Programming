#include <iostream>
using namespace std;

void brute()
{
   int n, m;
   cin >> n >> m;

   int b[n], v[m];
   for(int i=0; i<n; i++) cin >> b[i];
   for(int i=0; i<m; i++) cin >> v[i];

   //
   int cnt_b=0, cnt_v=0, i=0;

   for(; i<n-1; i++)
   {
      cnt_b += b[i] - b[i+1] + 1;
   }
   cnt_b += b[n-1];

   for(i=0; i<m-1; i++)
   {
      cnt_v += v[i] - v[i+1] + 1;
   }
   cnt_v += v[m-1];

   //
   int ans = cnt_b >= cnt_v ? 1 : 2;
   cout << ans << endl;
}

int main()
{
   int t;
   cin >> t;
   while(t--) brute();
}