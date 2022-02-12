#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int a[10], b[10], i;
	int a_score, b_score;
	char round;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < 10; i++){
		scanf("%d", &b[i]);	
	}
	
	a_score = b_score = 0;
	round = 'D';
	for(i = 0 ; i < 10; i++){
		if(a[i] > b[i]){
			a_score += 3;
			round = 'A';
		}
		else if(a[i] < b[i]){
			b_score += 3;
			round = 'B';
		}
		else{
			a_score++;
			b_score++;
		}
	}
	printf("%d %d\n", a_score, b_score);
	if(a_score > b_score) printf("A");
	else if(a_score < b_score) printf("B");
	else printf("%c", round);
	
	return 0;
}
