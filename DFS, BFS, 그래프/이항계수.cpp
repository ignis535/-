/*
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, r;
	int i;
	scanf("%d %d", &n, &r);
	
	vector<int> memo(n + 1, 1);
	for(i = 2; i <= n; i++){
		memo[i] = i * memo[i - 1];	
	}
	printf("%d", memo[n] / (memo[r] * memo[n - r]));
	
	return 0;
}
*/
#include <stdio.h>
using namespace std;

int memo[21][21];

int combination(int n, int r){
	if(memo[n][r] != 0) return memo[n][r];
	
	if(n == r || r == 0) return 1;
	else return memo[n][r] = combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, r;
	scanf("%d %d", &n, &r);
	
	printf("%d", combination(n, r));
}

