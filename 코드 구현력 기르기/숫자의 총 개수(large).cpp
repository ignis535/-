/*
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, tmp, digit, cnt, pivot, i;
	scanf("%d", &n);
	
	tmp = n;
	digit = 0;
	while(tmp != 0){
		tmp /= 10;
		digit++;	
	}
	
	cnt = 0;
	while(n != 0){
		pivot = 1;
		for(i = 0; i < digit - 1; i++)
			pivot *= 10;
		cnt += (n - pivot + 1) * digit;
		n = pivot - 1;
		digit--;
	}
	
	printf("%d", cnt);
	return 0;	
}
*/
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, sum, unit, digit, result;
	scanf("%d", &n);
	
	sum = 0;
	unit = 9;
	digit = 1;
	while(sum + unit < n){
		result += (unit * digit);
		digit++;
		sum += unit;
		unit *= 10;
	}
	result += (n - sum) * digit;
	printf("%d", result);
	
	return 0;	
}
