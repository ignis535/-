#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, k, pivot, cnt;
	int dx[4] = {-1, 0, 1, 0};
	int dy[4] = {0, 1, 0, -1};
	bool isHighest;
	scanf("%d", &n);
	vector<vector<int>> map(n + 2, vector<int> (n + 2));
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &map[i][j]);	
		}
	}
	cnt = 0;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			pivot = map[i][j];
			isHighest = true;
			for(k = 0; k < 4; k++){
				if(map[i + dx[k]][j + dy[k]] >= pivot){
					isHighest = false;
					break;
				}
			}
			if(isHighest) cnt++;
		}
	}
	printf("%d", cnt);
	
	return 0;
}
