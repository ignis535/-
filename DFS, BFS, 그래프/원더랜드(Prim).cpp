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
	int v, e;
	int i, a, b, c, result;
	scanf("%d %d", &v, &e);
	vector<pair<int, int> > graph[26];
	vector<int> check(v + 1, 0);
	
	for(i = 0; i < e; i++){
		scanf("%d %d %d", &a, &b, &c);
		graph[a].push_back({b, c});
		graph[b].push_back({a, c});	
	}
	
	priority_queue<data> pq;
	pq.push({1, 0});
	result = 0;
	while(!pq.empty()){
		data tmp = pq.top();
		pq.pop();
		int vertex = tmp.v;
		int cost = tmp.c;
		if(check[vertex] == 0){
			check[vertex] = 1;
			result += cost;
			for(i = 0; i < graph[vertex].size(); i++){
				pq.push({graph[vertex][i].first, graph[vertex][i].second});
			}
		}
	}
	printf("%d", result);
	
	return 0;
}
