#include <bits/stdc++.h>
using namespace std;

void adie()
{
   long long n;
   cin >> n;
   long long a, b;
   cin >> a >> b;

   //
   long long gp=n/3, in=n%3;
   
   gp *= a*3 > b ? b : a*3 ;

   if (in == 1)
   {
      in = min(a,b);
   }
   if (in == 2)
   {
      in = min(a*2, b);
   }

   // cout << gp << " " << in << " " ; 
   cout << gp + in << endl;

}

int main()
{
   long long _t;
   cin >> _t;
   while (_t --)
   {
      adie();
   }
}

//wrong answer on testcase 2