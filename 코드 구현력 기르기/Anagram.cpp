#include <stdio.h>
using namespace std;

int alphabet[52];

int main(void){
	// freopen("input.txt", "r", stdin);
	char str1[101], str2[101];
	int i;
	bool isAnagram;
	scanf("%s", str1);
	scanf("%s", str2);
	
	for(i = 0; str1[i] != '\0'; i++){
		if(str1[i] >= 65 && str1[i] <= 90){
			alphabet[str1[i] - 65]++;
		}
		else{
			alphabet[str1[i] - 97 + 26]++;	
		}
		
		if(str2[i] >= 65 && str2[i] <= 90){
			alphabet[str2[i] - 65]--;
		}
		else{
			alphabet[str2[i] - 97 + 26]--;	
		}
	}
	
	isAnagram = true;
	for(i = 0; i < 52; i++){
		if(alphabet[i] != 0) isAnagram = false;	
	}
	
	if(isAnagram) printf("YES");
	else		  printf("NO");
	
	return 0;	
}
