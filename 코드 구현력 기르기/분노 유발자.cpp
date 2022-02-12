/*
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, tmp, student[100], i, j, cnt, max;
	bool isBad;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		student[i] = tmp;	
	}
	
	cnt = 0;
	for(i = 0; i < n - 1; i++){
		max = student[i];
		isBad = true;
		for(j = i + 1; j < n; j++){
			if(student[j] >= max) isBad = false;	
		}
		if(isBad) cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}
*/
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, student[100], i, max, cnt;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &student[i]);	
	}
	
	max = student[n - 1];
	cnt = 0;
	for(i = n - 2; i >= 0; i--){
		if(student[i] > max){
			max = student[i];
			cnt++;	
		}
	}
	printf("%d", cnt);
	
	return 0;
}

