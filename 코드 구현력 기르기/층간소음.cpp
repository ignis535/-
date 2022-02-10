#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, m;
	int i, value, cnt, max;
	scanf("%d %d", &n, &m);
	
	cnt = 0;
	max = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &value);
		
		if(value > m) cnt++;
		else		  cnt = 0;
		
		if(cnt > max) max = cnt;
	}
	
	if(max == 0) printf("-1");
	else		 printf("%d", max);
	
	return 0;	
}
