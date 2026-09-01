#include <iostream>
#include <map>
using namespace std;

int brute()
{
   int m, n;
   cin >> n >> m;
   
   map<int, int> freq;
   int t;
   
   // Read n values and count their frequencies
   for(int i = 0; i < n; i++){
      cin >> t;
      freq[t]++;
   }
   
   // Find the maximum result for even numbers
   int ans = n;
   for(auto& p : freq){
      if(p.first % 2 == 0){  // Check if the key is even
         int count = p.second;
         ans = max(ans, count * 2);  // Calculate result based on frequency
      }
   }
   
   return ans;
}

int main()
{
   int t;
   cin >> t;
   while(t--){
      cout << brute() << endl;
   }
}