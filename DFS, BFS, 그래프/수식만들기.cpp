#include <stdio.h>
#include <vector>
using namespace std;

int n;
int maximum = -2147000000;
int minimum =  2147000000;
vector<int> arr;
vector<int> cnt(4);

void dfs(int level, int result){
	if(level == n){
		if(result > maximum) maximum = result;
		if(result < minimum) minimum = result;
	}
	else{
		for(int i = 0; i < 4; i++){
			if(cnt[i] != 0){
				cnt[i]--;
				switch(i){
					case 0:
						dfs(level + 1, result + arr[level + 1]);
						break;
					case 1:
						dfs(level + 1, result - arr[level + 1]);
						break;
					case 2:
						dfs(level + 1, result * arr[level + 1]);
						break;
					case 3:
						dfs(level + 1, (double) result / arr[level + 1]);
						break;	
				}
				cnt[i]++;
			}
		}	
	}
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int i, tmp;
	scanf("%d", &n);
	
	arr.push_back(0);
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}
	
	for(i = 0; i < 4; i++){
		scanf("%d", &cnt[i]);
	}
	
	dfs(1, arr[1]);
	printf("%d\n", maximum);
	printf("%d\n", minimum);
	
	return 0;
}
