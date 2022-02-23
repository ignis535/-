#include <stdio.h>
using namespace std;

int arr[8];
int check[10];

int send(){
	return 1000 * arr[6] + 100 * arr[1] + 10 * arr[3] + arr[0];
}

int more(){
	return 1000 * arr[2] + 100 * arr[4] + 10 * arr[5] + arr[1];	
}

int money(){
	return 10000 * arr[2] + 1000 * arr[4] + 100 * arr[3] + 10 * arr[1] + arr[7];	
}

void dfs(int level){
	if(level == 8){
		if(send() + more() == money()){
			if(arr[2] == 0 || arr[6] == 0) return;
			printf("   %d %d %d %d \n", arr[6], arr[1], arr[3], arr[0]);
			printf("  +%d %d %d %d \n", arr[2], arr[4], arr[5], arr[1]);
			printf(" ----------\n");
			printf(" %d %d %d %d %d \n", arr[2], arr[4], arr[3], arr[1], arr[7]);
		}
	}
	else{
		for(int i = 0; i < 10; i++){
			if(check[i] == 0){
				check[i] = 1;
				arr[level] = i;
				dfs(level + 1);
				check[i] = 0;	
			}
		}
	}
}

int main(void){
	dfs(0);
	
	return 0;	
}
