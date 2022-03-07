#include <stdio.h>
#include <vector>
using namespace std;

vector<int> list[30];
int n, cnt;
int check[21];

void dfs(int vertex){
	if(vertex == n) cnt++;
	else{
		for(int i = 0; i < list[vertex].size(); i++){
			if(check[list[vertex][i]] == 0){
				check[list[vertex][i]] = 1;
				dfs(list[vertex][i]);
				check[list[vertex][i]] = 0;
			}
		}
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int m;
	int i, j, k;
	scanf("%d%d", &n, &m);
	
	for(k = 0; k < m; k++){
		scanf("%d%d", &i, &j);
		list[i].push_back(j);	
	}
	
	check[1] = 1;
	dfs(1);
	printf("%d", cnt);
	
	return 0;
}

