#include <iostream>

using namespace std;

main(){
	int a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	int a = a1 + a2;
	int b = b1 + b2;
	cout << ((a < b)?a:b);
}

