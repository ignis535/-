#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n;
	int i, j, k, v1, v2;
	int maxi, mini, cnt;
	cin >> n;
	
	vector<vector<int> > graph(n + 1, vector<int> (n + 1, 1000));
	
	for(i = 1; i <= n; i++){
		graph[i][i] = 0;	
	}
	
	while(true){
		cin >> v1 >> v2;
		if(v1 == -1 && v2 == - 1) break;
		
		graph[v1][v2] = 1;
		graph[v2][v1] = 1;	
	}
	
	for(k = 1; k <= n; k++){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);	
			}
		}	
	}
	
	vector<int> result(n + 1);
	mini = 2147000000;
	for(i = 1; i <= n; i++){
		maxi = 0;
		for(j = 1; j <= n; j++){
			if(graph[i][j] > maxi) maxi = graph[i][j];
		}
		result[i] = maxi;
		if(maxi < mini) mini = maxi;
	}
	cout << mini << " ";
	
	cnt = 0;
	for(i = 1; i <= n; i++){
		if(result[i] == mini){
			cnt++;	
		}
	}
	cout << cnt << "\n";
	for(i = 1; i <= n; i++){
		if(result[i] == mini) cout << i << " ";	
	}
	
	return 0;
}
