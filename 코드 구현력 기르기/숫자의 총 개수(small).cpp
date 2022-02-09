#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, tmp, cnt;
	scanf("%d", &n);
	
	cnt = 0;
	for(i = 1; i <= n; i++){
		tmp = i;
		while(tmp != 0){
			tmp /= 10;
			cnt++;	
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}
