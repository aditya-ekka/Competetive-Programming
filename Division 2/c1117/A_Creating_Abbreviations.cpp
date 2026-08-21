#include <bits/stdc++.h>
using namespace std;

void brute()
{
   int n, m;
      cin >> n >> m;
      string ar[n];
      string ab[m];
      for(int i=0; i<n; i++) cin >> ar[i];
      for(int i=0; i<m; i++) cin >> ab[i];
      //
      // without unordered_set
      char a[n];
      for(int i=0; i<n; i++) a[i] = ar[i][0];
      //
      bool flag=true;
      for(int i=0; i<m; i++)
      {
         for(int j=0; j<ab[i].size(); j++)
         {
            flag = false;
            for(int k=0; k<n; k++)
            {
               if((int)(ab[i][j]) == (int)(a[k]) - 32){ //comparing their ASCII values (uppercase & lowercase)
                  flag = true;
                  break;
               }
            }
            if(flag == false)
            {
               break;
            }
         }
         if(flag == false) break;
      }
      string ans = flag ? "YES" : "NO";
      cout << ans << endl;
}

void adie_set()
{
   //unordered set
   int n, m;
   cin >> n >> m;
   unordered_set <char> s ;
   unordered_set <char> abr;
   string str;
   for(int i=0; i<n; i++){
      cin >> str;
      s.insert(str[0]);
   }
   for(int i=0; i<m; i++){
      cin >> str;
      for(int j=0; j<str.size(); j++){
         abr.insert(str[j]);
      }
   }

   for (char x : abr)
   {
      if(! s.count( tolower(x))){
         cout << "NO" << endl;
         return;
      }
   }
   cout << "YES" << endl;
}

int main()
{
   int t;
   cin >> t;
   while (t--)
      // brute();
      adie_set();
}