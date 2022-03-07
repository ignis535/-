#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

vector<int> list[10];

int main(void){
	freopen("input.txt", "r", stdin);
	int i, j, k, tmp;
	
	for(k = 0; k < 6; k++){
		scanf("%d%d", &i, &j);
		list[i].push_back(j);
	}
	
	queue<int> q;
	q.push(1);
	while(!q.empty()){
		tmp = q.front();
		q.pop();
		printf("%d ", tmp);
		for(k = 0; k < list[tmp].size(); k++){
			q.push(list[tmp][k]);
		}	
	}
	
	return 0;
}
