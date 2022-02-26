#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n, m;
	int i, j, k;
	cin >> n >> m;
	
	vector<vector<int> > graph(n + 1, vector<int>(n + 1));
	vector<int> degree(n + 1);
	for(k = 0; k < m; k++){
		cin >> i >> j;
		graph[i][j] = 1;
		degree[j]++;
	}
	
	queue<int> q;
	for(i = 1; i <= n; i++){
		if(degree[i] == 0) q.push(i);	
	}
	
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		cout << tmp << " ";
		for(i = 1; i <= n; i++){
			if(graph[tmp][i] == 1){
				degree[i]--;
				if(degree[i] == 0) q.push(i);	
			}
		}	
	}
	
	return 0;
}
