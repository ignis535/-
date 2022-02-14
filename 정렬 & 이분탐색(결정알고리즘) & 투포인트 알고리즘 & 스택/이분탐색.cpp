#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, m, i, left, right, mid;
	scanf("%d%d", &n, &m);
	vector<int> arr(n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);	
	}
	sort(arr.begin(), arr.end());
	
	left = 0;
	right = n - 1;
	while(left <= right){
		mid = (left + right) / 2;
		if(arr[mid] == m){
			printf("%d", mid + 1);
			break;
		}
		else if(arr[mid] > m) right = mid - 1;
		else 				  left = mid + 1;
	}
	
	return 0;	
}
