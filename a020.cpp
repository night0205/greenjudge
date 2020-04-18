#include <iostream>

using namespace std;

main(){
	int a, b;
	cin >> a >> b;
	int ans = 0;
	if(a%2 == 1)
		ans += 100;
	if(b==2||b==5||b==8)
		ans += 200;
	if(a==b)
		ans += 50;
	cout << ans;
}

