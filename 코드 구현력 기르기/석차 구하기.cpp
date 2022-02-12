#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j;
	scanf("%d", &n);
	vector<int> score(n);
	vector<int> rank(n, 1);
	
	for(i = 0; i < n; i++){
		scanf("%d", &score[i]);	
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(score[i] < score[j]) rank[i]++;
		}
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", rank[i]);	
	}
	
	return 0;
}
