#include <stdio.h>
using namespace std;

int result[50001];

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j;
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		for(j = i; j <= n; j = j + i){
			result[j]++;
		}
	}
	
	for(i = 1; i <= n; i++){
		printf("%d ", result[i]);	
	}
	
	return 0;
}
