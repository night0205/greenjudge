#include <iostream>

using namespace std;

main(){
	int a1, a2, c, b1, b2;
	cin >> a1 >> a2 >> c >> b1 >> b2;
	int a = a1 + a2;
	int b = b1 + b2;
	int c12 = a1 + c + b2;
	int c21 = a2 + c + b1;
	int cc = ((c12 < c21)?c12:c21);
	int ab = ((a < b)?a:b);
	cout << ((cc < ab)?cc:ab);
}

