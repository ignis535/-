#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j;
	int card, answer, sum;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		sum = 0;
		scanf("%d %d", &card, &answer);
		for(j = 1; j <= card; j++){
			sum += j;
		}
		if(sum == answer) printf("YES\n");
		else			  printf("NO\n");
	}
	return 0;	
}
