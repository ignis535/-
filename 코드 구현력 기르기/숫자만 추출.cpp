#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	char str[51];
	int result = 0, cnt = 0, i;
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] >= 48 && str[i] <= 57){
			result = result * 10 + (str[i] - 48);
		}
	}
	printf("%d\n", result);
	
	for(i = 1; i <= result; i++){
		if(result % i == 0) cnt++;	
	}
	printf("%d", cnt);
	
	return 0;	
}
