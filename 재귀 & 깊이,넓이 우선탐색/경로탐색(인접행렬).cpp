#include <stdio.h>
using namespace std;

int graph[21][21];
int check[21];
int result[21];
int n, cnt;

void dfs(int level, int vertex){
	int i;
	if(vertex == n){
		cnt++;
		/*
		for(i = 1; i <= level; i++){
			printf("%d ", result[i]);
		}
		printf("\n");
		*/
	}
	else{		
		for(i = 1; i <= n; i++){
			if(graph[vertex][i] == 1 && check[i] == 0){
				check[i] = 1;
				result[level + 1] = i;
				dfs(level + 1, i);
				check[i] = 0;
				result[level + 1] = 0;
			}
		}
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int m, i, j, k;
	scanf("%d %d", &n, &m);
	
	for(k = 0; k < m; k++){
		scanf("%d %d", &i, &j);
		graph[i][j] = 1;
	}
	
	check[1] = 1;
	result[1] = 1;
	dfs(1, 1);
	printf("%d", cnt);
	
	return 0;
}
