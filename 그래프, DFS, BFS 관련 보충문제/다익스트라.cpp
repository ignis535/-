/*
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	freopen("input.txt", "r", stdin);
	int n, m;
	int i, j, c, k;
	scanf("%d %d", &n, &m);
	vector<vector<int> > dis(n + 1, vector<int> (n + 1, 100000));
	
	for(k = 0; k < m; k++){
		scanf("%d %d %d", &i, &j, &c);
		dis[i][j] = c;
	}
	
	for(k = 1; k <= n; k++){
		for(j = 1; j <= n; j++){
			dis[1][j] = min(dis[1][j], dis[1][k] + dis[k][j]);
		}
	}
	
	for(k = 2; k <= n; k++){
		if(dis[1][k] != 100000)     printf("%d : %d\n", k, dis[1][k]);	
		else						printf("%d : impossible\n", k);
	}
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct data{
	int v, c;
	
	data(int a, int b){
		v = a;
		c = b;
	}
	
	bool operator<(const data &d) const{
		return c > d.c;	
	}
};

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, m;
	int i, j, k, val;
	scanf("%d %d", &n, &m);
	
	vector<pair<int, int> > graph[21];
	for(k = 0; k < m; k++){
		scanf("%d %d %d", &i, &j, &val);
		graph[i].push_back({j, val});
	}
	
	vector<int> dis(n + 1, 2147000000);
	dis[1] = 0;
	priority_queue<data> pq;
	pq.push(data(1, 0));
	while(!pq.empty()){
		data tmp = pq.top();
		pq.pop();
		int now = tmp.v;
		int cost = tmp.c;
		if(cost > dis[now]) continue;
		for(i = 0; i < graph[now].size(); i++){
			int next = graph[now][i].first;
			int nextDis = cost + graph[now][i].second;
			if(nextDis < dis[next]){
				dis[next] = nextDis;	
				pq.push(data(next, nextDis));	
			}
		}
	}
	for(i = 2; i <= n; i++){
		if(dis[i] != 2147000000) printf("%d : %d\n", i, dis[i]);
		else					 printf("%d : impossible\n", i);
	}
		
}

