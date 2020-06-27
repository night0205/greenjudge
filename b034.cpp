#include <iostream>

using namespace std;

main(){
	int n;
	cin >> n;
	int coin[9] = {1, 5, 10, 50, 100, 500, 1000, 5000, 10000};
	int ans = 0;
	for(int i = 8; i >= 0; i--){
		if(coin[i] <= n){
			ans += n/coin[i];
			n -= n/coin[i]*coin[i];
		}
	}
	cout << ans;

}
