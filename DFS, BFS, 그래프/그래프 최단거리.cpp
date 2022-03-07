#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int check[21];

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, m;
	int i, j, k, tmp;
	scanf("%d%d", &n, &m);
	vector<int> list[n + 1];
	
	for(k = 0; k < m; k++){
		scanf("%d%d", &i, &j);
		list[i].push_back(j);
	}
	
	queue<int> q;
	vector<int> result(n + 1);
	check[1] = 1;
	q.push(1);
	while(!q.empty()){
		tmp = q.front();
		q.pop();
		for(k = 0; k < list[tmp].size(); k++){
			if(check[list[tmp][k]] == 0){
				check[list[tmp][k]] = 1;
				q.push(list[tmp][k]);
				result[list[tmp][k]] = result[tmp] + 1;
			}			
		}
	}
	
	for(k = 2; k <= n; k++){
		printf("%d : %d\n", k, result[k]);	
	}
	
	return 0;
}
