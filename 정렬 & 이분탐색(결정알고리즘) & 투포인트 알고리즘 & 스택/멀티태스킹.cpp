#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, k, i, tot, time, pos;
	scanf("%d", &n);
	vector<int> oper(n);
	
	tot = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &oper[i]);	
		tot += oper[i];
	}
	
	scanf("%d", &k);
	if(tot <= k){
		printf("-1");
		return 0;
	}
	
	time = 0;
	pos = 0;
	while(true){
		if(time == k) break;
		
		if(oper[pos] != 0){
			oper[pos]--;
			time++;	
		}
		pos++;
		if(pos == n) pos = 0;
	}
	
	while(oper[pos] == 0){
		pos++;
	}
	printf("%d", pos + 1);	
	
	return 0;		
}
