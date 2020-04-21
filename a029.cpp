#include <iostream>

using namespace std;

main(){
	int a, b, ans = 0;
	cin >> a >> b;
	for(int i = a; i < b; i++){
		cout << i << '+';
		ans += i;
	}
	ans += b;
	cout << b << '=' << ans;
}
