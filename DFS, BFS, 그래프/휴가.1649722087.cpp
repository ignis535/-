#include <stdio.h>
#include <vector>
using namespace std;

int n;
int result;
vector<int> during;
vector<int> income;

void dfs(int day, int sum){
	if(day > n + 1) return;
	
	if(day == n + 1){
		if(sum > result) result = sum;
	}
	else{
		dfs(day + during[day], sum + income[day]);
		dfs(day + 1, sum);	
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int a, b;
	int i;
	scanf("%d", &n);
	
	during.push_back(0);
	income.push_back(0);
	for(i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		during.push_back(a);
		income.push_back(b);
	}
	
	dfs(1, 0);
	printf("%d", result);
	
	return 0;
}
