#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "r", stdin);
	
	int n;	
	cin >> n;
	vector<int> stone(n + 1);
	stone[1] = 2;
	stone[2] = 3;
	for(int i = 3; i <= n; i++){
		stone[i] = stone[i - 1] + stone[i - 2];	
	}
	cout << stone[n];
	
	return 0;
}
