#include <iostream>

using namespace std;

main(){
	string s;
	cin >> s;
	int flag = 0;
	for(int i = 0; i < s.length()/2; i++){
		if(s[i] != s[s.length()-1-i]){
			flag++;
			break;
		}
	}
	/*
	if(flag == 0)
		cout << "YES";
	else
		cout << "NO";
	*/
	cout << ((flag == 0)?"YES":"NO");
}

