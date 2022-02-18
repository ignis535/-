#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, tmp, cnt;
	scanf("%d", &n);
	vector<vector<int>> block(n, vector<int>(n));
	
	for(j = 0; j < n; j++){
		scanf("%d", &tmp);
		for(i = 0; i < n; i++){
			block[i][j] = tmp;
		}
	}
	
	cnt = 0;
	for(i = n - 1; i >= 0; i--){
		scanf("%d", &tmp);
		for(j = 0; j < n; j++){
			if(tmp < block[i][j]) block[i][j] = tmp;
			cnt += block[i][j];
		}
	}
	printf("%d", cnt);
	
	return 0;
}
