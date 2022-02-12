#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, cnt;
	scanf("%d", &n);
	vector<int> grade(n);
	vector<int> rank(n);	
	
	for(i = 0; i < n; i++){
		scanf("%d", &grade[i]);	
		rank[i] = i + 1;
	}
	
	for(i = 1; i < n; i++){
		cnt = 0;
		for(j = 0; j <= i - 1; j++){
			if(grade[j] < grade[i]) cnt++;	
		}
		if(cnt != 0) rank[i] -= cnt;
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", rank[i]);	
	}
	
	return 0;
}
