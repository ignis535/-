/*
#include <stdio.h>
#include <queue>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int s, e;
	int i, tmp, len, level;
	bool flag;
	scanf("%d%d", &s, &e);
	
	queue<int> q;
	
	q.push(s);
	level = 0;
	flag = false;
	while(!flag){
		len = q.size();
		for(i = 0; i < len; i++){
			tmp = q.front();
			q.pop();
			if(tmp == e){
				printf("%d", level);
				flag = true;
				break;
			}
			else if(tmp + 5 <= e){
				q.push(tmp + 5);
			}
			else if(tmp > e){
				q.push(tmp - 1);
			}
			else{
				q.push(tmp + 1);	
			}
		}
		level++;
	}
	
	return 0;
}
*/
#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;

int check[10001];
int dx[3] = {1, -1, 5};

int main(void){
	// freopen("input.txt", "r", stdin);
	int s, e;
	int i, x, tmp;
	scanf("%d %d", &s, &e);
	
	queue<int> q;
	check[s] = 1;
	q.push(s);
	while(!q.empty()){
		tmp = q.front();
		q.pop();
		for(i = 0; i < 3; i++){
			x = tmp + dx[i];
			if(x == e){
				printf("%d", check[tmp]);
				exit(0);	
			}
			
			if(check[x] == 0){
				check[x] = check[tmp] + 1;
				q.push(x);	
			}
		}
	}
	
	return 0;
}
