#include <bits/stdc++.h>
using namespace std;

void adie()
{
   string s;
   cin >> s;

   int n = s.length();
   int e=0, o=0;

   for(int i=0; i<n; i++){
      if(s[i]=='0' || s[i]=='4' || s[i]=='8'){
         e++;
      }
   }

   int y = n-1; //last idx of even no
   while (y >= 0)
   {
      if(s[y]=='2' || s[y]=='6')
      {
         break;
      }
      else
      {
         y--;
      }
   }

   int x=0; //first idx of odd no
   while (x<n)
   {
      if(s[x]=='2' || s[x]=='6')
      {
         x++;
      }
      else
      {
         break;
      }
   }
   
   int countEven = 0, countE = 0;
   for(int i=x; i<=y; i++)
   {
      if(s[i]=='2' || s[i]=='6')
      {
         countEven++;
      }
      if(s[i] =='0' || s[i]=='4' || s[i]=='8')
      {
         countE++;
      }
   }

   int ans = e;
   ans += min(countEven, y-x+1-countEven-countE);

   cout << ans << endl;
}

/*
'2' '6'
12, 32
odd numbers


'0' '4' '8'
20 24 28
even numbers
--must have to be removed!
*/

int main()
{
   int _t;
   cin >> _t;
   while (_t --)
   {
      adie();
   }
}

// wrong answer on testcase 2