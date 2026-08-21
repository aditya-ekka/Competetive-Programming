#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--){
      int n, k;
      cin >> n >> k;
      
      int mxm = 0;
      if(n - k < 2){
         cout << "-1" << endl;
         continue;
      }
//solution
      for(int i=0; i<k/2+1; i++){
         cout << "1";
      }
      for(int i=0; i< (k-k/2) + 1; i++){
         cout << "0";
      }
      
      int t = n-k -2;
      for(int i=0; i< (t/2); i++){
         cout << "10";
      }
      if(t%2 == 1){
         cout << "1";
      }
      cout << endl;
   }
}

/*

1 #0
1 0   #0

1 1 0 #1
1 1 0 0  #2

1 1 1 0 0   #3
1 1 1 0 0 0 #4

1 1 1 1 0 0 0     #5
1 1 1 1 0 0 0 0     #6

#################

1100 2
1001 1

11100 3
11001 2
11010 1

111000 4
110010 3














*/