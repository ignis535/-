/*
#include <stdio.h>
#include <queue>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, k, i, tmp;
	scanf("%d%d", &n, &k);
	queue<int> q;
	
	for(i = 1; i <= n; i++){
		q.push(i);	
	}
	
	while(q.size() != 1){
		for(i = 1; i <= k - 1; i++){
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		q.pop();
	}
	printf("%d", q.front());
	
	return 0;	
}
*/
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, k, i, tot, cnt, pos;
	scanf("%d%d", &n, &k);
	vector<int> check(n + 1, 0);
	
	pos = 1;
	tot = 0;
	cnt = 0;
	while(tot != n - 1){
		pos = (pos % (n + 1) == 0) ? 1 : pos;
		if(check[pos] == 0) cnt++;

		if(cnt == k){
			check[pos] = 1;	
			tot++;
			cnt = 0;
		}
		pos++;
	}
	
	
	for(i = 1; i <= n; i++){
		if(check[i] == 0){
			printf("%d", i);	
		}
	}
	
	return 0;	
}
