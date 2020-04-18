#include <iostream>

using namespace std;

main(){
	int g;
	cin >> g;
	int G = g + 3;
	int b = g * 2 - 5;
	int p = b - (b % 10) + G % 10;
	cout << p;
}

