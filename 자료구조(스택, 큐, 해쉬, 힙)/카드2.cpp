/*
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
*/
#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	
	queue<int> Q;
	for(int i = 1; i <= n; i++){
		Q.push(i);
	}
	
	while(Q.size() > 1){
		Q.pop();
		Q.push(Q.front());
		Q.pop();	
	}
	cout << Q.front();	

	return 0;
}
