#include <stdio.h>
#include <vector>
using namespace std;

vector<int> check(15);
vector<int> result(15);
vector<int> arr(15);
int cnt = 0;
int n, r;

void dfs(int level){
	int i;
	if(level == r){
		cnt++;
		for(i = 0; i < level; i++){
			if(result[i] != 0) printf("%d ", result[i]);	
		}
		puts("");
	}
	else{
		for(i = 0; i < n; i++){
			if(check[i]	== 0){
				check[i] = 1;
				result[level] = arr[i];
				dfs(level + 1);
				check[i] = 0;	
			}
		}
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int i;
	scanf("%d %d", &n, &r);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);	
	}
	
	dfs(0);
	printf("%d", cnt);
	
	return 0;
}
