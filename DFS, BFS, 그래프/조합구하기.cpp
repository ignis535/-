#include <stdio.h>
#include <vector>
using namespace std;

int n, r;
int cnt = 0;
vector<int> arr;
vector<int> result(1000);

void dfs(int level, int s){
	if(level == r){	
		cnt++;
		for(int i = 0; i < r; i++){
			printf("%d ", result[i]);	
		}
		puts("");
	}
	else{
		for(int i = s + 1; i <= n; i++){
			result[level] = arr[i];
			dfs(level + 1, i);
		}
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, tmp;
	scanf("%d %d", &n, &r);	
	
	arr.push_back(0);
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}
	
	dfs(0, 0);
	printf("%d", cnt);
	
	return 0;
}
