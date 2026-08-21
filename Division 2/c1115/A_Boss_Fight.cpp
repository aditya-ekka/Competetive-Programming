#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int t;
      unordered_map <int, int> freq;
      for(int i=0; i<n; i++){
         cin >> t;
         freq[t]++;
      }
      //
      int sum=0;
      int max_freq=0, element=-1;
      for(auto [num, f] : freq){
         sum += num*f;
         if(f > max_freq){
            max_freq = f;
            element = num;
         }
      }


      if(max_freq <= ((n+1)/2)){
         cout << sum<< endl;;
      }else{
         cout << (sum - max_freq*element) + element * (n - max_freq + 2)<< endl;

      }
   }
}