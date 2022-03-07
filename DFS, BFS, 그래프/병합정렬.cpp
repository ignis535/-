#include <stdio.h>
using namespace std;

int arr[100];
int tmp[100];

void mergeSort(int left, int right){
	int mid;
	int p1, p2, p3;
	if(left < right){
		mid = (left + right + 1) / 2;
		mergeSort(left, mid - 1);
		mergeSort(mid, right);
		p1 = left;
		p2 = mid;
		p3 = left;
		while(p1 <= mid - 1 && p2 <= right){
			if(arr[p1] < arr[p2]) tmp[p3++] = arr[p1++];
			else				  tmp[p3++] = arr[p2++];	
		}
		while(p1 <= mid - 1) tmp[p3++] = arr[p1++];
		while(p2 <= right)   tmp[p3++] = arr[p2++];
		for(int i = left; i <= right; i++){
			arr[i] = tmp[i];	
		}
	}
}

int main(void){
	freopen("input.txt", "r", stdin);
	int n, i;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);	
	}
	
	mergeSort(0, n - 1);
	
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);	
	}
}
