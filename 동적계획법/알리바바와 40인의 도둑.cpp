/*
#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n;
	int i, j;
	cin >> n;
	vector<vector<int> > map(n + 1, vector<int>(n + 1, 0));
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			cin >> map[i][j];
		}
	}
	vector<vector<int> > dis(n + 1, vector<int>(n + 1, 0));
//	for(i = 1; i <= n; i++){
//		dis[i][1] += dis[i - 1][1] + map[i][1];	
//	}
//	for(j = 2; j <= n; j++){
//		dis[1][j] += dis[1][j - 1] + map[1][j];	
//	}
//	
//	for(i = 2; i <= n; i++){
//		for(j = 2; j <= n; j++){
//			dis[i][j] = min(dis[i - 1][j], dis[i][j - 1]) + map[i][j];
//		}
//	}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			if(i == 1 && j >= 2){
				dis[i][j] += dis[i][j - 1] + map[i][j];	
			}
			else if(i >= 2 && j == 1){
				dis[i][j] += dis[i - 1][j] + map[i][j];
			}
			else{
				dis[i][j] = min(dis[i - 1][j], dis[i][j - 1]) + map[i][j];
			}
		}
	}		
	cout << dis[n][n];
	
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > matrix(21, vector<int>(21));
vector<vector<int> > memo(21, vector<int>(21, 0));

int dfs(int x, int y){
	if(memo[x][y] != 0) return memo[x][y];
	
	if(x == 1 && y == 1) return matrix[1][1];
	else if(x == 1){
		return memo[x][y] = dfs(1, y - 1) + matrix[1][y];
	}
	else if(y == 1){
		return memo[x][y] = dfs(x - 1, 1) + matrix[x][1];
	}
	else{
		return memo[x][y] = min(dfs(x - 1, y), dfs(x, y - 1)) + matrix[x][y];	
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n;
	int i, j;
	cin >> n;
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			cin >> matrix[i][j];
		}
	}	
	
	cout << dfs(n, n);
	
	return 0;
}

