#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, idx, tmp, cnt;
	scanf("%d", &n);
	vector<int> arr(n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n - 1; i++){
		idx = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] > arr[idx]) idx = j;
		}
		tmp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = tmp;
	}
	
	cnt = 1;
	for(i = 0; i < n - 1; i++){
		if(cnt == 3){
			printf("%d", arr[i]);
			break;	
		}
		
		if(arr[i] != arr[i + 1]) cnt++;		
	}
}
