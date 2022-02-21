#include <stdio.h>
using namespace std;

int graph[21][21];
int check[21];
int n, cost;
int min = 2147000000;

void dfs(int vertex, int cost){
	if(vertex == n){
		if(cost < min) min = cost;
	}
	else{
		for(int i = 1; i <= n; i++){
			if(graph[vertex][i] != 0 && \
			   check[i] == 0){
				check[i] = 1;
				dfs(i, cost + graph[vertex][i]);   	
				check[i] = 0;
			}
		}
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int m;
	int i, j, k, val;
	
	scanf("%d%d", &n, &m);
	
	for(k = 0; k < m; k++){
		scanf("%d%d%d", &i, &j, &val);	
		graph[i][j] = val;
	}
	
	check[1] = 1;
	dfs(1, 0);
	printf("%d", min);
	
	return 0;
}
