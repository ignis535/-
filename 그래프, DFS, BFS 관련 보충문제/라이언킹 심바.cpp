#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

struct State{
	int x, y;
	int time;
	
	State(int a, int b, int c){
		x = a;
		y = b;
		time = c;
	}
	
	bool operator<(const State &s) const{
		if(time == s.time){
			if(x == s.x) return y > s.y;
			else		 return x > s.x;
		}
		else return time > s.time;
	}
};

struct Lion{
	int x, y;
	int size = 2;
	int eat = 0;
	
	void size_up(){
		size++;
		eat = 0;
	}
};

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// ifstream cin;
	// cin.open("input.txt");
	int n, i, j, k;
	int result;
	cin >> n;
	
	vector<vector<int> > map(n, vector<int>(n));
	Lion symba;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> map[i][j];
			if(map[i][j] == 9){
				symba.x = i;
				symba.y = j;
				map[i][j] = 0;		
			}
		}
	}
	
	priority_queue<State> pq;
	pq.push(State(symba.x, symba.y, 0));
	vector<vector<int> > check(n, vector<int>(n));
	while(!pq.empty()){
		State tmp = pq.top();
		pq.pop();
		int x = tmp.x;
		int y = tmp.y;
		int t = tmp.time;
		if(map[x][y] != 0 && map[x][y] < symba.size){
			symba.x = x;
			symba.y = y;
			symba.eat++;
			if(symba.size == symba.eat) symba.size_up();
			map[x][y] = 0;
			for(i = 0; i < n; i++){
				for(j = 0; j < n; j++){
					check[i][j] = 0;
				}
			}
			while(!pq.empty()) pq.pop();
			result = tmp.time;
		}
		for(k = 0; k < 4; k++){
			int new_x = x + dx[k];
			int new_y = y + dy[k];
			if(0 <= new_x && new_x < n && \
			   0 <= new_y && new_y < n && \
			   map[new_x][new_y] <= symba.size && \
			   check[new_x][new_y] == 0){
			   	pq.push(State(new_x, new_y, t + 1));
			   	check[new_x][new_y] = 1;
			}
		}
		
	}
	cout << result;
	
	return 0;	
}
