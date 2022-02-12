/*
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, pre, now, abs;
	bool isJumper;
	scanf("%d", &n);
	vector<int> check(n);
	
	scanf("%d", &pre);
	for(i = 1; i < n; i++){
		scanf("%d", &now);
		abs = (pre > now ? pre - now : now - pre);
		check[abs] = 1;
		pre = now;
	}
	
	isJumper = true;
	for(i = 1; i <= n - 1; i++){
		if(check[i] != 1){
			isJumper = false;
			break;	
		}
	}
	if(isJumper) printf("YES");
	else		 printf("NO");
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, pre, now, tmp;
	scanf("%d", &n);
	vector<int> check(n);	
	
	scanf("%d", &pre);
	for(i = 1; i < n; i++){
		scanf("%d", &now);
		tmp = abs(pre - now);
		if(tmp >= 1 && tmp <= n - 1 && check[tmp] == 0) check[tmp] = 1;
		else{
			printf("NO");
			return 0;	
		}
		pre = now;
	}
	printf("YES");
	
	return 0;
}
