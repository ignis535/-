#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "r", stdin);
	
	int n;
	int i;
	string order;
	cin >> n;
	
	queue<int> q;
	for(i = 0; i < n; i++){
		cin >> order;
		if(order == "push"){
			int x;
			cin >> x;
			q.push(x);	
		}
		else if(order == "pop"){
			if(q.empty()) cout << -1 << "\n";
			else{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if(order == "size"){
			cout << q.size() << "\n";	
		}
		else if(order == "empty"){
			if(q.empty()) cout << 1 << "\n";
			else 		  cout << 0 << "\n";
		}
		else if(order =="front"){
			if(q.empty()) cout << -1 << "\n";
			else{
				cout << q.front() << "\n";
			}
		}
		else if(order == "back"){
			if(q.empty()) cout << -1 << "\n";
			else{
				cout << q.back() << "\n";
			}	
		}
	}
	
	return 0;
}
