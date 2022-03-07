#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int t;
	int n, m;
	int tmp, cnt;
	cin >> t;
	
	while(t--){
		cin >> n >> m;
		
		priority_queue<int> pq;
		queue<pair<int, int> > q;
		for(int i = 0; i < n; i++){
			cin >> tmp;
			q.push({i, tmp});
			pq.push(tmp);
		}
		
		cnt = 0;
		while(true){
			int idx = q.front().first;
			int val = q.front().second;
			q.pop();
			
			if(val == pq.top()){
				pq.pop();
				cnt++;	
				if(idx == m){
					cout << cnt << "\n";
					break;	
				}
			}
			q.push({idx, val});	
		}
	}
	
	return 0;
}
