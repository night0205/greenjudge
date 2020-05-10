#include <iostream>

using namespace std;

int a[100000][100000];

int Find(int ans, int n, int m, int x, int y){
	int tmp = a[y][x];
	for(int i = 0; x+i < m && y+i < n ; i++){
		if(tmp != a[y+i][x+i]){
			ans++;
			break;
		}
	}
	if(ans != 0)
		return 1;
	else 
		return 0;
}

int main(){
	int t;
	cin >> t;
	int n, m;
	while(cin >> n >> m){
		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> a[i][j];
		}
		for(int i = 0; i < n; i++)
			ans = Find(ans, n, m, 0, i);
		for(int i = 0; i < m; i++)
			ans += Find(ans, n, m, i, 0);
		if(ans == 0)
			cout << "Yes";
		else
			cout << "No";
		cout << "\n";		
	}
	return 0;
}


