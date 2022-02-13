/*
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, size;
	scanf("%d", &n);
	vector<int> arr(n + 1);
	vector<int> result(n + 1);
	
	for(i = 1; i <= n; i++){
		scanf("%d", &arr[i]);	
	}
	
	size = 0;
	for(i = n; i >= 1; i--){
		for(j = size - 1; j >= arr[i]; j--){
			result[j + 1] = result[j];
		}
		result[arr[i]] = i;
		size++;
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", result[i]);	
	}
	
	return 0;	
}
*/
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	freopen("input.txt", "r", stdin);
	int n, i, j;	
	scanf("%d", &n);
	vector<int> arr(n + 1);
	vector<int> result(n + 1);
	
	for(i = 1; i <= n; i++){
		scanf("%d", &arr[i]);	
	}
	
	for(i = n; i >= 1; i--){
		for(j = i; j < i + arr[i]; j++){
			result[j] = result[j + 1];
		}
		result[j] = i;
	}
	
	for(i = 1; i <= n; i++){
		printf("%d ", result[i]);
	}	
	
	return 0;
}
