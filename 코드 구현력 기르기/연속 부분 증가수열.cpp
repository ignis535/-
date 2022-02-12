#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, pre, tmp, cnt, max;
	int i;
	scanf("%d", &n);
	
	max = cnt = 1;
	scanf("%d", &pre);
	for(i = 1; i < n; i++){
		scanf("%d", &tmp);
		if(tmp >= pre){
			cnt++;	
		}
		else{
			cnt = 1;	
		}
		pre = tmp;
		if(cnt > max) max = cnt;
	}
	printf("%d", max);
	
	return 0;
}
