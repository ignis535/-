#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	char str[101], result[101];
	int p = 0, i;
	gets(str);
	
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] != ' '){
			if(str[i] >= 65 && str[i] <= 90){
				result[p++] = str[i] + 32;	
			}
			else{
				result[p++] = str[i];	
			}
		}
	}
	result[p] = '\0';
	printf("%s", result);
	
	return 0;
}
