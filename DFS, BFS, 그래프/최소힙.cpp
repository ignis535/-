#include <stdio.h>
#include <queue>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n;
	
	priority_queue<int> pq;
	while(true){
		scanf("%d", &n);
		if(n == 0){
			if(pq.empty()) printf("-1\n");
			else{
				printf("%d\n", -pq.top()); 	
				pq.pop();	
			}
		}
		else if(n == -1) return 0;	
		else    	     pq.push(-n);
	}
	
	return 0;
}
