/*
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, tmp, min, idx;
	scanf("%d", &n);	
	vector<int> arr(n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);	
	}
	
	for(i = 0; i < n - 1; i++){
		min = arr[i];
		idx = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] < min){
				min = arr[j];	
				idx = j;
			}
		}
		tmp = arr[i];
		arr[i] = min;
		arr[idx] = tmp;
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);	
	}
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, idx, tmp;
	scanf("%d", &n);
	vector<int> arr(n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);	
	}
	
	for(i = 0; i < n - 1; i++){
		idx = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] < arr[idx]) idx = j;
		}
		tmp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = tmp;
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);	
	}
		
}
