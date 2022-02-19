/*
#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, tmp, now;
	vector<char> result;
	scanf("%d", &n);	
	stack<int> s;
	
	now = 1;
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		if(s.empty() || s.top() > tmp){
			result.push_back('P');
			s.push(tmp);	
		}
		else{
			while(!s.empty() && s.top() < tmp){
				if(now != s.top()){
					printf("impossible");
					return 0;	
				}
				result.push_back('O');
				s.pop();	
				now++;
			}
			result.push_back('P');
			s.push(tmp);
		}
	}
	while(!s.empty()){
		if(now != s.top()){
			printf("impossible");
			return 0;
		}
		result.push_back('O');
		s.pop();
		now++;
	}
	
	for(i = 0; i < result.size(); i++){
		printf("%c", result[i]);	
	}
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, tmp;
	scanf("%d", &n);
	stack<int> s;
	vector<char> result;
	
	j = 1;
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		s.push(tmp);
		result.push_back('P');
		while(1){
			if(s.empty()) break;
			if(j == s.top()){
				s.pop();
				result.push_back('O');
				j++;	
			}
			else break;
		}
	}
	
	if(s.empty()){
		for(i = 0; i < result.size(); i++){
			printf("%c", result[i]);
		}
	}
	else printf("impossible");
	
	return 0;
}
