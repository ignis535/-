/*
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> house;
vector<pair<int, int>> pizza;
vector<pair<int, int>> result(12);
int mini = 2147000000;
int n, m;
int dis;

void dfs(int level, int s){
	if(level == m){
		int tot = 0;
		for(int i = 0; i < house.size(); i++){
			int tmp = 2147000000;
			for(int j = 0; j < m; j++){
				int dis = abs(house[i].first - result[j].first) + \
						  abs(house[i].second - result[j].second);
				if(dis < tmp) tmp = dis;
			}
			tot += tmp;
		}
		if(tot < mini) mini = tot;
	}
	else{
		for(int i = s + 1; i < pizza.size(); i++){
			result[level] = pizza[i];
			dfs(level + 1, i);
		}
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, j, val;
	scanf("%d %d", &n, &m);
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &val);
			if(val == 1) house.push_back({i, j});
			else if(val == 2) pizza.push_back({i, j});
		}
	}
	
	dfs(0, -1);
	printf("%d", mini);
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> house;
vector<pair<int, int>> pizza;
vector<pair<int, int>> result(12);
int mini = 2147000000;
int n, m;
int dis;

void dfs(int level, int s){
	if(level == m){
		int tot = 0;
		for(int i = 0; i < house.size(); i++){
			int sum = 2147000000;
			int x1 = house[i].first;
			int y1 = house[i].second;
			for(int j = 0; j < m; j++){
				int x2 = result[j].first;
				int y2 = result[j].second;
				int dis = abs(x1 - x2) + abs(y1 - y2);
				if(dis < sum) sum = dis;
			}
			tot += sum;
		}
		if(tot < mini) mini = tot;
	}
	else{
		for(int i = s; i < pizza.size(); i++){
			result[level] = pizza[i];
			dfs(level + 1, i + 1);
		}
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, j, val;
	scanf("%d %d", &n, &m);
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &val);
			if(val == 1) house.push_back({i, j});
			else if(val == 2) pizza.push_back({i, j});
		}
	}
	
	dfs(0, 0);
	printf("%d", mini);
	
	return 0;
}
