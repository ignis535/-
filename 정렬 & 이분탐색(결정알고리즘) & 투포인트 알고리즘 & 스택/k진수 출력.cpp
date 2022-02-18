#include <stdio.h>
#include <stack>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, k;
	char str[20] = "0123456789ABCDEF";
	scanf("%d%d", &n, &k);
	stack<int> s;
	
	while(n != 0){
		s.push(n % k);
		n /= k;	
	}
	
	while(!s.empty()){
		printf("%c", str[s.top()]);
		s.pop();
	}
	
	return 0;
}
