#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n, m;
	int i, j;
	int score, time;
	cin >> n >> m;
	
	vector<int> memo(m + 1, 0);
	vector<int> tmp(m + 1, 0);
	for(i = 0; i < n; i++){
		cin >> score >> time;
		for(j = m; j >= time; j--){
			memo[j] = max(memo[j], memo[j - time] + score);
		}
	}
	cout << memo[m];
	
	return 0;	
}
