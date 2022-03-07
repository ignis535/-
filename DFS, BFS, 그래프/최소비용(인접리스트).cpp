#include <stdio.h>
#include <vector>
#include <utility>
using namespace std;

vector<pair<int, int>> list[21]; 
int check[21];
int n, cost = 2147000000;

void dfs(int vertex, int sum){
	if(vertex == n){
		if(sum < cost) cost = sum;
	}
	else{
		for(int i = 0; i < list[vertex].size(); i++){
			if(check[list[vertex][i].first] == 0){
				check[list[vertex][i].first] = 1;
				dfs(list[vertex][i].first, sum + list[vertex][i].second);
				check[list[vertex][i].first] = 0;	
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
		list[i].push_back({j, val});
	}
	
	check[1] = 1;
	dfs(1, 0);
	printf("%d", cost);
	
	return 0;
}
