#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;
int n;

int count(int len){
	int pos = arr[0], cnt = 1, i;
	for(i = 1; i < n; i++){
		if(arr[i] - pos >= len){
			cnt++;
			pos = arr[i];	
		}
	}
	return cnt;
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int c, i, tmp, result, left, right, mid, pos, cnt;
	scanf("%d%d", &n, &c);
	
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());
	
	left = 1;
	right = arr[n - 1] - 1;
	while(left <= right){
		mid = (left + right) / 2;
		
		if(count(mid) >= c){		
			result = mid;
			left = mid + 1;	
		}
		else{
			right = mid - 1;	
		}
	}
	printf("%d", result);
	
	return 0;
}
