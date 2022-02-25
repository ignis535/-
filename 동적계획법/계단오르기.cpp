/*
#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);
	freopen("input.txt", "r", stdin);
	
	int n;
	int i;
	cin >> n;
	vector<int> length(n + 1);
	
	length[1] = 1;
	length[2] = 2;
	for(i = 3; i <= n; i++){
		length[i] = length[i - 1] + length[i - 2];	
	}
	cout << length[n];
	
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> memo(46);

int dfs(int len){
	if(memo[len] != 0) return memo[len];
	
	if(len == 1 || len == 2) return len;
	else{
		return memo[len] = dfs(len - 1) + dfs(len - 2);
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n;
	scanf("%d", &n);
	cout << dfs(n);
		
	return 0;
}
