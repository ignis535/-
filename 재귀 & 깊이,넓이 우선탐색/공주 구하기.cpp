#include <stdio.h>
#include <queue>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, k;
	int i, tmp;
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
