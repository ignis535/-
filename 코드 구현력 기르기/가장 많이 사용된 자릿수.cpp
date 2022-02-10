#include <stdio.h>
using namespace std;

int cnt[10];

int main(void){
	// freopen("input.txt", "r", stdin);
	char str[101];
	int i, max, num;
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++){
		cnt[str[i] - 48]++;	
	}
	
	max = 0;
	num = 0;
	for(i = 0; i < 10; i++){
		if(cnt[i] >= max){
			max = cnt[i];
			num = i;
		}
	}
	
	printf("%d", num);
	
	return 0;	
}
