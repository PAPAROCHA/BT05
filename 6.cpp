#include <iostream>
using namespace std;
int gcd( int a ,int b){
	if ( a == b ) return b;
	if ( a > b ) return gcd(a-b,b); 
	else return gcd(a,b-a); 
}
int main() {
	int a,b;
	cin >> a >> b ;
	if (gcd(a,b)==1) cout << "nguyen to cung nhau";
	else cout << "khong nguyen to cung nhau";
	return 0;
}
