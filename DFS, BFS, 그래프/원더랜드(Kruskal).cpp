#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge{
	int v1;
	int v2;
	int cost;
	
	Edge(int a, int b, int c){
		v1 = a;
		v2 = b;
		cost = c;
	}
	
	bool operator<(const Edge &E) const{
		return cost < E.cost;	
	}
};

int root[21];

int find(int v){
	if(v == root[v]) return v;
	else return root[v] = find(root[v]);
}

void Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a != b) root[a] = b;
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int v, e;
	int i;
	int a, b, c;
	int f_a, f_b;
	int result;
	scanf("%d %d", &v, &e);
	
	for(i = 1; i <= v; i++){
		root[i] = i;	
	}
	
	vector<Edge> city;
	for(i = 0; i < e; i++){
		scanf("%d %d %d", &a, &b, &c);
		city.push_back(Edge(a, b, c));
	}
	sort(city.begin(), city.end());

	result = 0;
	for(i = 0; i < e; i++){
		f_a = find(city[i].v1);
		f_b = find(city[i].v2);
		if(f_a != f_b){
			Union(city[i].v1, city[i].v2);
			result += city[i].cost;
		}
	}
	printf("%d", result);
	
	return 0;
}
