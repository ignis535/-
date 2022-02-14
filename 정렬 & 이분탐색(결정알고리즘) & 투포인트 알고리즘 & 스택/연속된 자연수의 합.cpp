/*
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, tmp, cnt, common;
	double limit;
	scanf("%d", &n);
	
	cnt = 0;
	limit = (sqrt(1 + 8 * n) - 1) / 2;
	for(i = 2; i <= limit; i++){
		tmp = n;
		for(j = 1; j <= i; j++){
			tmp -= j;	
		}
		if(tmp % i == 0){
			cnt++;
			common = tmp / i;
			for(j = 1; j < i; j++){
				printf("%d + ", j + common);
			}
			printf("%d = %d\n", j + common, n);
		}
	}
	printf("%d", cnt);
	
	return 0;
}
*/
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, tmp, cnt;
	scanf("%d", &n);
	tmp = n;
	i = 1;
	n--;
	while(n > 0){
		i++;
		n -= i;
		if(n % i == 0){
			for(j = 1; j < i; j++){
				printf("%d + ", n / i + j);	
			}
			printf("%d = %d\n", n / i + j, tmp);
			cnt++;
		}
	}
	printf("%d", cnt);
	
	return 0;		
}

