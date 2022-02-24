#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
	// freopen("input.txt", "r", stdin);
	int m, n;
	int i, j;
	int x, y;
	int new_x, new_y;
	int riped, max;
	scanf("%d %d", &m, &n);
	
	vector<vector<int> > box(n, vector<int>(m));
	queue<pair<int ,int> > tomato;
	riped = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &box[i][j]);
			if(box[i][j] == 1) tomato.push({i, j});
			if(box[i][j] == 0) riped++;
		}
	}
	
	if(riped == 0){
		printf("0");
		return 0;	
	}
	
	while(!tomato.empty()){
		x = tomato.front().first;
		y = tomato.front().second;
		tomato.pop();
		for(j = 0; j < 4; j++){
			new_x = x + dx[j];
			new_y = y + dy[j];
			if(new_x >= 0 && new_x < n && \
			   new_y >= 0 && new_y < m && \
			   box[new_x][new_y] == 0){
				tomato.push({new_x, new_y});
				box[new_x][new_y] = box[x][y] + 1;   	
			}	
		}
	}
	
	max = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(box[i][j] == 0){
				printf("-1");
				return 0;	
			}
			if(box[i][j] > max) max = box[i][j];
		}
	}
	printf("%d", max - 1);
	
	return 0;
}
