/*
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n1, n2, p1, p2, p3, i;
	scanf("%d", &n1);
	vector<int> arr1(n1);
	
	for(i = 0; i < n1; i++){
		scanf("%d", &arr1[i]);
	}
	
	scanf("%d", &n2);
	vector<int> arr2(n2);
	
	for(i = 0; i < n2; i++){
		scanf("%d", &arr2[i]);
	}
	
	vector<int> result(n1 + n2);
	
	p1 = p2 = p3 = 0;
	while(p1 < n1 && p2 < n2){
		if(arr1[p1] < arr2[p2]){
			result[p3] = arr1[p1];
			p1++;
		}
		else{
			result[p3] = arr2[p2];
			p2++;	
		}
		p3++;	
	}
	if(p1 == n1){
		while(p2 < n2){
			result[p3] = arr2[p2];
			p2++;
			p3++;
		}
	}
	else{
		while(p1 < n1){
			result[p3] = arr1[p1];
			p1++;
			p3++;	
		}	
	}
	
	for(i = 0; i < n1 + n2; i++){
		printf("%d ", result[i]);	
	}
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n1, n2, p1, p2, p3, i;
	scanf("%d", &n1);
	vector<int> arr1(n1);
	
	for(i = 0; i < n1; i++){
		scanf("%d", &arr1[i]);
	}
	
	scanf("%d", &n2);
	vector<int> arr2(n2);
	
	for(i = 0; i < n2; i++){
		scanf("%d", &arr2[i]);	
	}
	
	vector<int> result(n1 + n2);
	p1 = p2 = p3 = 0;
	while(p1 < n1 && p2 < n2){
		if(arr1[p1] < arr2[p2]) result[p3++] = arr1[p1++];
		else 					result[p3++] = arr2[p2++];
	}
	
	while(p1 < n1) result[p3++] = arr1[p1++];
	while(p2 < n2) result[p3++] = arr2[p2++];
	
	for(i = 0; i < n1 + n2; i++){
		printf("%d ", result[i]);	
	}
	
	return 0;
}
