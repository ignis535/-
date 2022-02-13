/*
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	freopen("input.txt", "r", stdin);
	int n, i, j, idx, tmp; 
	scanf("%d", &n);
	vector<int> arr(n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);	
	}
	
	for(i = 1; i < n; i++){
		idx = i;
		j = i - 1;
		while(j >= 0){
			if(arr[j] > arr[idx]){
				tmp = arr[j];
				arr[j] = arr[idx];
				arr[idx] = tmp;
				idx--;
				j--;	
			}
			else break;
		}
	}
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);	
	}
	
}	
*/
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	freopen("input.txt", "r", stdin);
	int n, i, j, tmp;
	scanf("%d", &n);
	vector<int> arr(n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);	
	}
	
	for(i = 1; i < n; i++){
		tmp = arr[i];
		for(j = i - 1; j >= 0; j--){
			if(arr[j] > tmp) arr[j + 1] = arr[j];
			else break;
		}
		arr[j + 1] = tmp;
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);	
	}
	
	return 0;
}
