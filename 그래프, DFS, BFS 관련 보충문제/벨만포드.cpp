#include <stdio.h>
#include <vector>
using namespace std;

struct data{
	int v1, v2, cost;
	
	data(int a, int b, int c){
		v1 = a;
		v2 = b;
		cost = c;
	}
};

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, m;
	int i, j, k, val;
	int s, e;
	scanf("%d %d", &n, &m);	
	
	vector<data> city;
	for(k = 0; k < m; k++){
		scanf("%d %d %d", &i, &j, &val);
		city.push_back(data(i, j, val));
	}
	
	vector<int> dis(n + 1, 2147000000);

	scanf("%d %d", &s, &e);
	dis[s] = 0;
	for(i = 1; i <= n - 1; i++){
		for(j = 0; j < city.size(); j++){
			int s = city[j].v1;
			int e = city[j].v2;
			int c = city[j].cost;
			if(dis[s] != 2147000000 && dis[s] + c < dis[e])
				dis[e] = dis[s] + c;
		}
	}
	
	for(j = 0; j < city.size(); j++){
		int u = city[j].v1;
		int v = city[j].v2;
		int w = city[j].cost;
		if(dis[u] != 2147000000 && dis[u] + w < dis[v]){
			printf("-1");
			return 0;	
		}
	}	
	printf("%d", dis[e]);
	
	return 0;
}
