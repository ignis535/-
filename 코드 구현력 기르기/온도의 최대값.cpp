/*
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, k, sum, max;
	int i, j;
	int temperature[100000];
	scanf("%d%d", &n, &k);
	
	for(i = 0; i < n; i++){
		scanf("%d", &temperature[i]);	
	}

	for(i = 0; i < k; i++){
		sum += temperature[i];	
	}
	
	max = sum;
	for(i = k; i <= n; i++){
		sum += temperature[i];
		sum -= temperature[i - k];
		if(sum > max) max = sum;
	}
	printf("%d", max);
	
	return 0;	
}
*/
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, k;
	int i;
	int sum, max;
	scanf("%d %d", &n, &k);
	vector<int> arr(n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);	
	}
	
	sum = 0;	
	for(i = 0; i < k; i++){
		sum += arr[i];
	}
	
	max = sum;
	for(i = k; i < n; i++){
		sum += (arr[i] - arr[i - k]);
		if(sum > max) max = sum;
	}
	printf("%d", max);
	
	return 0;	
}
