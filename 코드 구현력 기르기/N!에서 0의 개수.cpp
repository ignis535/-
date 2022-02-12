#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, tmp, cnt1, cnt2;
	scanf("%d", &n);
	
	for(i = 2; i <= n; i++){
		tmp = i;
		
		j = 2;
		while(tmp != 1){
			if(tmp % j == 0){
				if(j == 2) cnt1++;
				else if(j == 5) cnt2++;
				tmp /= j;	
			}
			else j++;
		}
	}
	
	if(cnt1 < cnt2) printf("%d", cnt1);
	else 			printf("%d", cnt2);
	return 0;	
}
