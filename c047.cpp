#include <iostream>

using namespace std;

main(){
	int n;
	cin >> n;
	int ans = 0, t;
	for(int i = 0; i < n; i++){
		cin >> t;
		ans += (t-2)*(t-2);
	}
	cout << ans;
}
