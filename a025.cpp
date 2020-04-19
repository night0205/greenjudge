#include <iostream>
#include <string>
using namespace std;

main(){
        string s;
        cin >> s;
		int x = s.length() - 1, t = 0;
        for(int i = x; i >= 0;i--){
			if(s[i] != '0')t++;
			if(t != 0)
					cout << s[i];
		}
}

