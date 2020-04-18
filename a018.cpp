#include <iostream>

using namespace std;

main(){
	int h, m;
	cin >> h >> m;
	int a = h*100 + m;
	if(a >= 1420 && a <= 1640)
		cout << "YES";
	else
		cout << "NO";
}

