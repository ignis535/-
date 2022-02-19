#include <stdio.h>
using namespace std;

void dfs(int x){
	if(x == 0) return;
	else{
		dfs(x / 2);
		printf("%d", x % 2);	
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int n;
	scanf("%d", &n);
	
	dfs(n);	
}
