#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, cnt;
	bool flag;
	scanf("%d", &n);
	
	cnt = 0;
	for(i = 2; i <= n; i++){
		flag = true;
		for(j = 2; j * j <= i; j++){
			if(i % j == 0){
				flag = false;
				break;	
			}
		}
		if(flag) cnt++;
	}
	printf("%d", cnt);
	
	return 0;	
}
