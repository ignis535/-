/*
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i;
	int a[100], b[100];
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);		
	}
	
	for(i = 0; i < n; i++){
		scanf("%d", &b[i]);	
	}
	
	for(i = 0; i < n; i++){
		switch(a[i]){
			case 1:
				if(b[i] == 3) 	   printf("A");
				else if(b[i] == 2) printf("B");
				else               printf("D");
				break;
				
			case 2:
				if(b[i] == 1) 	   printf("A");
				else if(b[i] == 3) printf("B");
				else               printf("D");
				break;
				
			case 3:
				if(b[i] == 2) 	   printf("A");
				else if(b[i] == 1) printf("B");
				else               printf("D");
				break;
		}
		printf("\n");
	}
	
	return 0;	
}
*/
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, a[100], b[100];
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n; i++){
		scanf("%d", &b[i]);	
	}
	
	for(i = 0; i < n; i++){
		if(a[i] == b[i]) printf("D");
		else if(a[i] == 1 && b[i] == 3) printf("A");
		else if(a[i] == 2 && b[i] == 1) printf("A");
		else if(a[i] == 3 && b[i] == 2) printf("A");
		else printf("B");	
	}
	
	return 0;
}
