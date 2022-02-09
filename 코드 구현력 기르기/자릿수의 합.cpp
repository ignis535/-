#include <stdio.h>
using namespace std;

int digit_sum(int x){
	int sum = 0;
	while(x != 0){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, number, tmp, result, i, max;
	scanf("%d", &n);
	
	max = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &number);
		tmp = digit_sum(number);
		if(tmp > max){
			max = tmp;
			result = number;	
		}
		else if(tmp == max && number > result){
				max = tmp;
				result = number;
		}
	}
	
	printf("%d", result);
	
	return 0;
}
