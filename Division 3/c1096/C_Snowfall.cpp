#include <iostream>
using namespace std;

void adie()
{
   int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }

   // solve
   int ans[n]; int j=0;
   for(int i=0; i<n; i++){
       if(arr[i]%6==0) ans[j++]=arr[i];
   }
   for(int i=0; i<n; i++){
       if(arr[i]%3==0 && arr[i]%6!=0) ans[j++]=arr[i];
   }
   for(int i=0; i<n; i++){
      if(arr[i]%3!=0 && arr[i]%2!=0) ans[j++]=arr[i];
   }
   for(int i=0; i<n; i++){
      if(arr[i]%2==0 && arr[i]%6!=0) ans[j++]=arr[i];
   }

   for(int i=0; i<n; i++){
       cout << ans[i] << " ";
   }
   cout << endl;
}
int main()
{
    int _t;
    cin >> _t;
    while(_t--){
        adie();
    }
    
}
