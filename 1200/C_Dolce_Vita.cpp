#include <iostream>
#include <algorithm>

using namespace std;

// long long brute()
// {
//    long long n, x;
//    cin >> n >> x;
//    long long ar[n], presum=0;
//    long long presum[n];
//    for(long long i=0; i<n; i++){
//       cin >> ar[i];
//       presum += ar[i];
//       presum[i] = presum;
//    }

//    sort(ar, ar+n);

//    long long i;
//    for(i=0; i<n && ar[i] <= x; i++);
//    i--;

//    long long ans=0, //total number of packets
//    days=0; // number of days to go for lower number of packets per day
//    for(;i>=0 && x > 0; i--){
//       days = x - ar[i] + 1;
//       ans += days * (i+1);
//       if(i>0) x = ar[i-1];
//    }

//    return ans;
// }

int difference()
{
   int n, x;
   cin >> n >> x;
   int ar[n];
   int pre=0;
   for(int i=0; i<n; i++){
      cin >> ar[i];
      pre += ar[i];
      ar[i] = pre;
   }

   sort(ar,ar+n);
//sort and store presum
   int ans=0;
   for(int i=0; i<n && x >= ar[i]; i++){
      ans += (x - ar[i] + i + 1)/ (i+ 1);
      cout << ans << " ";
   }
   
   return ans;
}

int main()
{
   long long t;
   cin >> t;
   while(t--)
   {
      cout << difference() << endl;
   }
}