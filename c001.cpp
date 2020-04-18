#include <iostream>

using namespace std;

main(){
	int y, m;
	cin >> y >> m;
	int ans = 0;
	int d = y*100 + m;
	if((d < 9008)||(d > 10107))
		cout << 0;
	else
		cout << (y-90)*12+m-7;
}

