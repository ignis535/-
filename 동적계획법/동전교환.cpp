#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n;
	int i, j, payback;
	
	cin >> n;
	vector<int> coin(n);	
	for(i = 0; i < n; i++){
		cin >> coin[i];
	}
	
	cin >> payback;
	vector<int> memo(payback + 1, 500);
	memo[0] = 0;
	for(i = 0; i < n; i++){
		for(j = coin[i]; j <= payback; j++){
			memo[j] = min(memo[j], memo[j - coin[i]] + 1);
		}
	}
	cout << memo[payback];
	
	return 0;
}
