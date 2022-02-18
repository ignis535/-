#include <stdio.h>
#include <stack>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	char str[31];
	int i;
	scanf("%s", str);
	stack<char> s;
	
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == '('){
			s.push('(');
		}
		else{
			if(s.empty()){
				printf("NO");
				return 0;	
			}
			else{
				s.pop();	
			}
		}
	}
	
	if(s.empty()) printf("YES");
	else		  printf("NO");
	
	return 0;
}
