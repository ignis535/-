#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = {-1, 0, 1, -1};
int dy[4] = {0, 1, 0, -1};

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, j, k;
	int x, y;
	int new_x, new_y;
	int cnt;
	
	vector<vector<int> > map(8, vector<int>(8));
	for(i = 1; i <= 7; i++){
		for(j = 1; j <= 7; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	queue<pair<int, int> > q;
	q.push({1, 1});
	map[1][1] = 1;
	cnt = 0;
	while(!q.empty()){
		x = q.front().first;
		y = q.front().second;
		if(x == 7 && y == 7){
			printf("%d", map[x][y] - 1);
			return 0;	
		}
		q.pop();
		for(k = 0; k < 4; k++){
			new_x = x + dx[k];
			new_y = y + dy[k];
			if(new_x >= 1 && new_x <= 7 && \
			   new_y >= 1 && new_y <= 7 && \
			   map[new_x][new_y] == 0){
				q.push({new_x, new_y});
				map[new_x][new_y] = map[x][y] + 1;   	
			}
		}
	}

	printf("-1");
	return 0;
}
