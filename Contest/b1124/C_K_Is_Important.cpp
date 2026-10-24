#include <bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--)
   {
      //input
      int n, k;
      cin >> n >> k;
      vector<int> v(n);
      for(int i=0; i<n; i++){
         cin >> v[i];
      }

      //basic initialization
      k--;
      long long ans=0;
      //edge case
      if (n == 1) {
         cout << v[0] << '\n';
         continue;
      }

      //case 1 : n is sufficiently large
      if(n > 2*k)
      {
         for(int i=k; i<n-k; i++){
            ans += v[i];
         }
         
         int m = 2*k;
         vector<int> ar(m);
         for(int i=0; i<m/2; i++){
            ar[i+k] = v[i];         //
         }
         for(int i=0; i<m/2; i++){
            ar[m-i-1-k] = v[n-i-1]; //
         }

         //solve
         vector<int> presum(k+1);
         int i=0, j=k-1, sum=0;
         for(;i<k; i++){
            sum += ar[i];
         }
         i=0;

         for(; i<k && j<m;){
            presum[i] = sum;
            sum -= ar[i];
            i++;
            j++;
            sum += ar[j];
         }
         presum[k] = sum;

         int sum_max=presum[0];
         for(i=0; i<=k; i++){
            sum_max = max (sum_max, presum[i]);
         }

         ans += sum_max;

         cout << ans<< endl;;
      }
      else //case 2 : n is short -> l and r OVERLAP
      {
         //use the same vector
         if(n%2==1) ans += v[n/2];

         int m = n;
         if(n%2==1) m--;

         vector<int> ar(m);

         int i;
         for(i=0; i<n/2; i++){
            ar[i+ n/2] = v[i];
         }
         
         if(n%2==1) i++;

         for(int j=0; i<n ; j++){
            ar[j] = v[i];
            i++;
         }

         // //solve
         vector<int> presum;
         i=0;int j=m-k-1, sum=0;
         for(; i<=j ; i++){
            sum += ar[i];
         }
         i=0;

         for(; j<m-1 ;){
            if((i<=m/2 ) && (j>= m/2 - 1) && (j<m)){
               presum.push_back(sum);
            }
            sum -= ar[i];
            i++;
            j++;
            sum += ar[j];
         }
         if((i<=m/2) && (j >= m/2 - 1) && (i<m) && (j<m)){
            presum.push_back(sum);
         }

         int sum_max=INT_MIN;
         for(i=0; i<presum.size(); i++){
            sum_max = max (sum_max, presum[i]);
         }

         ans += sum_max;

         cout << ans;
         cout << endl;;

      }

   }
}