#include <stdio.h>
using namespace std;

void dfs(int x){
	if(x == 0) return;
	else{
		printf("%d ", x);
		dfs(x - 1);
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int n; 
	scanf("%d", &n);
	
	dfs(n);	
	
	return 0;
}
