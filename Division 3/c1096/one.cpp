#include <iostream>
using namespace std;

void adie()
{
    int a, b;
    cin >> a >> b;
    if(a%2 == 1 && b%2==1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}
int main()
{
    int _t;
    cin >> _t;
    adie();
    
}
