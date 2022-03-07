#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, cnt;
	int i, j, k;
	int x, y;
	int new_x, new_y;
	scanf("%d", &n);	
	
	vector<vector<int> > map(n, vector<int>(n));
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	cnt = 0;
	queue<pair<int, int> > q;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(map[i][j] == 1){
				cnt++;	
				q.push({i, j});
				map[i][j] = 0;
				while(!q.empty()){
					x = q.front().first;
					y = q.front().second;
					q.pop();
					for(k = 0; k < 8; k++){
						new_x = x + dx[k];
						new_y = y + dy[k];
						if(new_x >= 0 && new_x < n && \
						   new_y >= 0 && new_y < n && \
						   map[new_x][new_y] == 1){
						 	q.push({new_x, new_y});
							map[new_x][new_y] = 0;  	
						}
					}
				}
			}
		}
	}
	printf("%d", cnt);
	
	return 0;
}
