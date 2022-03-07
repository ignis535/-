#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n, tmp;
	int i;
	cin >> n;	
	
	queue<int> q;
	for(i = 1; i <= n; i++){
		q.push(i);	
	}
	
	while(q.size() != 1){
		q.pop();
		if(q.size() == 1){
			break;
		}
		else{
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
	}
	cout << q.front();
	
	return 0;
}

