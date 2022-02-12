/*
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	char str[9];
	int i, sum, result;
	scanf("%s", str);
	
	sum = 0;
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == 'H'){
			if(sum == 0) result = 12;
			else         result = sum * 12;
			sum = 0;
		}
		else if(str[i] >= 48 && str[i] <= 57){
			sum = sum * 10 + str[i] - 48;	
		}
	}
	if(sum == 0) result += 1;
	else	     result += sum;

	printf("%d", result);
		
	return 0;	
}

#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	char str[9];
	int i, c, h, pos;
	scanf("%s", str);
	
	c = h = 0;
	if(str[1] == 'H'){
		c = 1;
			
	}
	else{
		for(i = 1; str[i] != 'H'; i++){
			c = c * 10 + (str[i] - 48);	
		}
	}
	pos = i;
	if(str[pos + 1] == '\0'){
		h = 1;	
	}
	else{
		for(i = pos + 1; str[i] != '\0'; i++){
			h = h * 10 + (str[i] - 48);	
		}
	}
	printf("%d", c * 12 + h);
	return 0;
}
*/

#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n;
	int left, cur, right, k, cnt;
	scanf("%d", &n);
	
	left = k = 1;
	cnt = 0;
	while(left != 0){
		left = n / (k * 10);
		cur = (n / k) % 10;
		right = n % k;
		if(cur > 3) cnt += (left + 1) * k;
		else if(cur < 3) cnt += left * k;
		else cnt += (left * k + right + 1);
		k *= 10;
	}
	printf("%d", cnt);
	
	return 0;
}
