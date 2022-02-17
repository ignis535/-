#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, m, i, left, right, mid, max, result, tmp, sum, cnt;
	scanf("%d%d", &n, &m);
	vector<int> arr(n);
	
	sum = 0;
	max = -2147000000;
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);	
		sum += arr[i];
		if(arr[i] > max) max = arr[i];
	}
	
	left = 1;
	right = sum;
	while(left <= right){
		mid = (left + right) / 2;
		tmp = 0;
		cnt = 1;
		for(i = 0; i < n; i++){			
			if(tmp + arr[i] <= mid){
				tmp += arr[i];
			}
			else{
				cnt++;
				tmp = arr[i];	
			}
		}
		
		if(mid >= max && cnt <= m){
			result = mid;
			right = mid - 1;
		}
		else if(cnt > m){
			left = mid + 1;
		}
	}
	printf("%d", result);
	
	return 0;	
}
