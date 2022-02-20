#include <stdio.h>
#include <vector>
using namespace std;

vector<int> arr;
int n, m, cnt;

void dfs(int level, int sum){	
	if(level == n){
		if(sum == m) cnt++;	
	}
	else{
		dfs(level + 1, sum + arr[level]);
		dfs(level + 1, sum - arr[level]);
		dfs(level + 1, sum);	
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, tmp;
	scanf("%d%d", &n, &m);
	
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}
	
	dfs(0, 0);
	if(cnt == 0) printf("-1");
	else		 printf("%d", cnt);
	
	return 0;
}
