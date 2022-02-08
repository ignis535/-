#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	char id[20];
	int year, age;
	scanf("%s", id);
	if(id[7] == '1' || id[7] == '2'){
		year = 1900 + ((id[0] - 48) * 10 + (id[1] - 48));
	}
	else{
		year = 2000 + ((id[0] - 48) * 10 + (id[1] - 48));	
	}
	age = 2019 - year + 1;
	printf("%d ", age);
	if(id[7] == '1' || id[7] == '3'){
		printf("M");
	}
	else{
		printf("W");	
	}
}
