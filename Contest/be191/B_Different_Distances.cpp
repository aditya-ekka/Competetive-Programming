#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   for(int i=0; i<t; i++)
   {
      int n;
      cin >> n;
      
      if(n%2 == 0)
      {
         int a=1, b=2;
         while(b <= n)
         {
            cout << b << " " <<
                    a << " " <<
                    a << " " <<
                    b << " " <<
                    a << " " <<
                    b << " " <<
                    b << " " <<
                    a << " ";
            a+=2; b+=2;
         }
      }
      else
      {
         int evn = n/2 - 1 ;
         int a=1, b=2;
         for(int j=0; j<evn; j++)
         {
            cout << b << " " <<
            a << " " <<
            a << " " <<
            b << " " <<
            a << " " <<
            b << " " <<
            b << " " <<
            a << " ";
            a+=2; b+=2;
         }
         
         int c = b+1;
         cout << a << " " <<
                 a << " " <<
                 b << " " <<
                 a << " " <<
                 b << " " <<
                 c << " " <<
                 a << " " <<
                 c << " " <<
                 b << " " <<
                 b << " " <<
                 c << " " <<
                 c;
      }
      cout << endl;
   }
}