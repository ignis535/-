#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n, m;
	int i, j, k, v1, v2, cost;
	cin >> n >> m;
	
	vector<vector<int> > graph(n + 1, vector<int> (n + 1, 1000));
	
	for(i = 1; i <= n; i++){
		graph[i][i] = 0;	
	}
	
	for(i = 1; i <= m; i++){
		cin >> v1 >> v2 >> cost;
		graph[v1][v2] = cost;
	}	
	
	for(k = 1; k <= n; k++){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);	
			}
		}	
	}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			if(graph[i][j] == 1000) cout << "M ";
			else					cout << graph[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
