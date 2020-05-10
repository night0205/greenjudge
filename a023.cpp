#include <iostream>

using namespace std;

main(){
	int n, ans = 1;
	cin >> n;
	while(n != 1){
		if(n%2 == 1)
			n = 3 * n + 1;
		else
			n =  n / 2;
		ans++;
		//cout << n << '\n';
	}
	cout << ans;
}
