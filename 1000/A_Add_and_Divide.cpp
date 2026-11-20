#include <iostream>
#include<vector>
#include <map>
#include<algorithm>
#define ll long long

using namespace std;

int solve()
{
   int a , b;
   cin >> a >> b;
   int ans=0;
   if(b==1){
      b++;
      ans++;
   }

   while(a > 0){
      a = a/b;
      ans++;
   }

   return ans;
}

int solve3 (int a, int b, int cnt, int flag) {
   if (a == 0) return cnt;
   // if (a < 2LL * b) return cnt + 1;

   if (flag < 5) {
      return min(
          solve3(a/b, b, cnt + 1, 0),
          solve3(a, b+1,  cnt + 1, flag + 1)
      );
   } else {
      return solve3(a/b, b, cnt + 1, 0);
   }

}

int solve2()
{
   int a, b;
   cin >> a >> b;

   if (b == 1) return solve3 (a, b+1, 1, 1);

   return solve3 (a, b, 0, 0);
}

int solve4() {
   int a, b;
   cin >> a >> b;

   int ans = __INT_MAX__;
   int cnt = 0;
   if (b==1) {
      ++b;
      ++cnt;
   }

   for (int i=0; i<10; ++i) { // Why is it certainly 10 (find the correct range till we have to go to)
      int p = a;
      int q = b + i;
      int xcnt = cnt + i;

      while (p != 0) {
         p /= q;
         ++xcnt;
      }

      ans = min (ans, xcnt);
   }

   return ans;
}

int main()
{
   int t;
   cin >> t;
   while(t--){
      cout << solve4() << endl;
   }
   return 0;

}

/*
   if I'll do b+1 mai starting me hi karlunga
*/