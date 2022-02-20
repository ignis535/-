#include <stdio.h>
#include <vector>
using namespace std;

bool flag = false;
int n, total;
vector<int> arr;

void dfs(int level, int sum){
	if(flag == true) return;
	
	if(level == n){
		if(sum == total - sum){
			flag = true;
			return;
		}
	}
	else{
		dfs(level + 1, sum + arr[level]);
		dfs(level + 1, sum);	
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, tmp;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		arr.push_back(tmp);
		total += arr[i];
	}
	
	dfs(0, 0);
	
	if(flag == true) printf("YES");
	else			 printf("NO");
	
	return 0;
}
