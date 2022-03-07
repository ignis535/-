#include <stdio.h>
#include <vector>
using namespace std;

int n;
vector<int> result;

void dfs(int level){
	if(level == n){
		int i;
		for(i = 0; i < result.size(); i++){
			printf("%d ", result[i]);	
		}
		printf("\n");
	}
	else{
		result.push_back(level + 1);
		dfs(level + 1);
		result.pop_back();
		dfs(level + 1);
	}
}

int main(void){
	freopen("input.txt", "r", stdin);
	scanf("%d", &n);
	
	dfs(0);
	
	return 0;	
}
