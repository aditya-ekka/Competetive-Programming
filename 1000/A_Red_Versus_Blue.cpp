#include <iostream>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--){
      int n, r, b;
      cin >> n >> r >> b;
      int x = r/(b+1);
      int y = r - x*(b+1);
      string s="";
      
      while(y>0){
         for(int i=0; i<=x; i++){
            s += "R";
         }
         s += "B";
         y--;
      }

      for(int i=s.size()+1; i<n-x; i++){
         for(int j=0; j<x; j++){
            s += "R";
         }
         i += x;
         s += "B";
      }

      for(int j=0; j<x; j++){
         s += "R";
      }
      
      cout << s << endl;
   }
}