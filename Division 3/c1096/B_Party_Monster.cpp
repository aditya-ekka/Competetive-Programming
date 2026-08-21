#include <iostream>
using namespace std;

void adie()
{
    int n;
    string s;
    cin >>  n >> s;

    int l=0, r=0;
      for(int i=0; i<n; i++){
        if(s[i]=='(') l++;
        else r++;
      }

      if(l==r) cout << "YES" << endl;
      else cout << "NO" << endl;
}
int main()
{
    int _t;
    cin >> _t;
    while(_t--){
        adie();
    }
    
}
