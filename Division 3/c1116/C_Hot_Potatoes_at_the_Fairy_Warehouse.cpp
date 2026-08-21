#include<iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      long long n; long long k;
      cin >> n >> k;
      string s;
      cin >> s;
      char a=s[0], b=s[2*n - 1]; //for edge case

      for(int i = 2*n - 1; i>0; i--)
      {
         if(s[i]=='0'){
            if(s[i-1]=='1'){
               s[i]='1';
               s[i-1]='0';
               i--;
            }
         }
      }

      // cout << s << endl;
      // edge case
         if(a=='0' && b=='1')
         {
            s[0] = '1';
            s[2*n-1] = '0';
         }
      //

      
      int cnt1=0;
      int odd=0;
      for(int i=0; i<2*n; i++){
         if(s[i]=='1'){
            cnt1++;
            if(i%2==1){
               odd++;
            }
         }
      }

      // cout << s << endl;
      cout << odd << " " << cnt1-odd << endl;
   }
}