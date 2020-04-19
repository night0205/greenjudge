#include <iostream>
#include <algorithm>

using namespace std;

main(){
	int n;
	cin >> n;
	int d[n];
	for(int i = 0; i < n; i++)
		cin >> d[i];
	sort(d, d+n);
	int x = d[0], t = 1, ans[2] = {0,0};
	for(int i = 1; i < n; i++){
//		cout << d[i] << ' ' << t << '\n';
		if(t > ans[1]){
			ans[0] = x;
			ans[1] = t;
		}
		if(x == d[i])t++;
		else{
			x = d[i];
			t = 1;
		}
	}
	if(t > ans[1]){
		ans[0] = x;
		ans[1] = t;
	}
	cout << ans[0] << ' ' << ans[1];
}
