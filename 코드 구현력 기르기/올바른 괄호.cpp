/*
#include <stdio.h>
#include <stack>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	char str[31];
	int i;
	stack<int> st;
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++){
		if(st.empty() && str[i] == ')'){
			st.push(')');
			break;	
		}
		if(str[i] == '('){
			st.push('(');	
		}
		else{
			st.pop();	
		}
	}	
	
	if(st.size()){
		printf("NO");	
	}
	else{
		printf("YES");	
	}
	
	return 0;
}
*/
#include <stdio.h>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	char str[101];
	int cnt = 0, i;
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == '(') cnt++;
		else			  cnt--;
		if(cnt < 0) break;
	}
	
	if(cnt == 0) printf("YES");
	else		 printf("NO");
	
	return 0;
}
