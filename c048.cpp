#include <iostream>

using namespace std;

main(){
	string s;
	cin >> s;
	int cnt[] = {0, 0, 0}, ans = 0;
	for(int i = 0; i < s.length(); i++){
		int t = s[i]-'A';
		if(t < 3)
			cnt[t]++;
		else{
			if((cnt[0] >= 3)&&(cnt[1] >= 2)&&(cnt[2] >= 1))
				ans++;
			cnt[0] = cnt[1] = cnt[2] = 0;	
		}
	}
	cout << ans;
}


