#include <bits/stdc++.h>
using namespace std;

vector<int> memo(46);

int step(int n){
	if(memo[n] != 0) return memo[n];
	
	if(n == 1 || n == 2) return n;
	else{
		return memo[n] = step(n - 1) + step(n - 2);
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "r", stdin);
	
	int n;
	scanf("%d", &n);
	
	cout << step(n);
	
	return 0;
}
