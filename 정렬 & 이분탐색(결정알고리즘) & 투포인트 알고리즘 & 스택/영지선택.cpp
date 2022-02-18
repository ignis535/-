/*
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int row, col, h, w;
	int i, j, m, n, sum, max, tmp;
	scanf("%d%d", &row, &col);
	vector<vector<int>> map(row + 1, vector<int>(col + 1));
	
	for(i = 1; i <= row; i++){
		for(j = 1; j <= col; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	scanf("%d%d", &h, &w);
	tmp = 0;
	for(m = 1; m <= h - 1; m++){
		for(n = 1; n <= w; n++){
			tmp += map[m][n];	
		}
	}
			
	max = tmp;
	for(i = 1; i <= row - (h - 1); i++){
		for(j = 1; j <= col - (w - 1); j++){
			if(j == 1){
				for(n = 0; n < w; n++){
					tmp += (map[i + h - 1][j + n] - map[i - 1][j + n]);	
				}
				sum = tmp;
			}
			else{
				for(m = 0; m < h; m++){
					sum += (map[i + m][j + w - 1] - map[i + m][j - 1]);
				}
			}
			if(sum > max) max = sum;
		}
	}
	printf("%d", max);
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int row, col, h, w;
	int i, j, sum, max;
	scanf("%d%d", &row, &col);
	vector<vector<int>> map(row + 1, vector<int>(col + 1));
	vector<vector<int>> dp(row + 1, vector<int>(col + 1));
	
	for(i = 1; i <= row; i++){	
		for(j = 1; j <= col; j++){
			scanf("%d", &map[i][j]);
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + map[i][j];		
		}
	}
	
	scanf("%d%d", &h, &w);
	max = -2147000000;
	for(i = h; i <= row; i++){
		for(j = w; j <= col; j++){
			sum = dp[i][j] - (dp[i - h][j] + dp[i][j - w]) + dp[i - h][j - w];
			if(sum > max) max = sum;
		}
	}
	printf("%d", max);
}	

