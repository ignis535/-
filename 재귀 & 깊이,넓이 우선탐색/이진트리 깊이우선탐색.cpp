#include <stdio.h>
using namespace std;

void preOrder(int level, int value){
	if(level == 3) return;
	else{
		printf("%d ", value);
		preOrder(level + 1, value * 2);
		preOrder(level + 1, value * 2 + 1);
	}
}

void inOrder(int level, int value){
	if(level == 3) return;
	else{
		inOrder(level + 1, value * 2);
		printf("%d ", value);
		inOrder(level + 1, value * 2 + 1);
	}
}

void postOrder(int level, int value){
	if(level == 3) return;
	else{
		postOrder(level + 1, value * 2);
		postOrder(level + 1, value * 2 + 1);
		printf("%d ", value);
	}
}

int main(void){
	printf("������ȸ ���: "); 
	preOrder(0, 1);
	printf("\n");
	
	printf("������ȸ ���: "); 
	inOrder(0, 1);
	printf("\n");
	
	printf("������ȸ ���: "); 
	postOrder(0, 1);
	printf("\n"); 
	
	return 0;	
}
