/*
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int map[9][9];
int result[9][2];

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, j, sum, diff, min;
	
	for(i = 0; i < 9; i++){
		sum = 0;
		for(j = 0; j < 9; j++){
			scanf("%d", &map[i][j]);
			sum += map[i][j];
		}
		result[i][0] = int((double(sum) / 9) + 0.5);
		sort(map[i], map[i + 1]);
	}
	
	for(i = 0; i < 9; i++){
		min = 2147000000;
		for(j = 0; j < 9; j++){
			diff = map[i][j] - result[i][0];
			if(diff < 0) diff *= -1;
			if(diff <= min){
				min = diff;
				result[i][1] = map[i][j];
			}
		}
	}
	
	for(i = 0; i < 9; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
*/
#include <stdio.h>
#include <algorithm>
using namespace std;

int map[9][9];

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, j, sum, avg, diff, min, result;
	
	for(i = 0; i < 9; i++){
		sum = 0;
		for(j = 0; j < 9; j++){
			scanf("%d", &map[i][j]);
			sum += map[i][j];
		}
		avg = sum / 9.0 + 0.5;
		printf("%d ", avg);
		min = 2147000000;
		for(j = 0; j < 9; j++){
			diff = abs(map[i][j] - avg);
			if(diff < min){
				min = diff;
				result = map[i][j];
			}
			else if(diff == min){
				if(map[i][j] > result) result = map[i][j];	
			}
		}
		printf("%d\n", result);
	}
	
	return 0;
}
