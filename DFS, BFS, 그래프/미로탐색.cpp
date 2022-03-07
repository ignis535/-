#include <stdio.h>
using namespace std;

int map[8][8];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt;

void dfs(int a, int b){
	if(a == 7 && b == 7) cnt++;
	else{
		int x, y, i;
		for(i = 0; i < 4; i++){
			x = a + dx[i];
			y = b + dy[i];
			if(x >= 1 && x <= 7 && \
			   y >= 1 && y <= 7 && \
			   map[x][y] == 0){
				map[x][y] = 1;
				dfs(x, y);
				map[x][y] = 0;   	
			}
		}
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, j;
	
	for(i = 1; i <= 7; i++){
		for(j = 1; j <= 7; j++){
			scanf("%d", &map[i][j]);	
		}
	}
	
	map[1][1] = 1;
	dfs(1, 1);
	printf("%d", cnt);
	
	return 0;
}
