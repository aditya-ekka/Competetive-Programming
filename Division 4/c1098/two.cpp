#include <iostream>
using namespace std;

void print(int n)
{
	 cout << n << endl;
}

void adie()
{
	 int n, x, y, k;
	 cin >> n >> x >> y >> k;

	 if(n==2 || n==3){
		  print(1);
		  return;
	 }
	 
	 int a = k;
	 if(max(x,y) == n){
		  a += min(min(x,y), n-min(x,y));
	 }else{
		  a += min (max(x,y)-min(x,y), 
					 n-max(x,y)+min(x,y));
	 }
	 print(a);
}

int main()
{
	 int t;
	 cin >> t;
	 while(t--)
		  adie();
}
