/*
#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n, limit;
	int i, j;
	int a, b;
	cin >> n >> limit;
	
	vector<pair<int, int> > ruby;
	for(i = 0; i < n; i++){
		cin >> a >> b;
		ruby.push_back({a, b});	
	}
	
	vector<int> memo(limit + 1, 0);
	for(i = 0; i < n; i++){
		for(j = ruby[i].first; j <= limit; j++){
			int tmp = memo[j - ruby[i].first] + ruby[i].second;
			if(tmp > memo[j])
				memo[j] = tmp;
		}
	}
	
	cout << memo[limit];
	
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	int n, limit;
	int i, j;
	int weight, price;
	cin >> n >> limit;
	
	vector<int> memo(limit + 1);
	for(i = 0; i < n; i++){
		cin >> weight >> price;
		for(j = weight; j <= limit; j++){
			memo[j] = max(memo[j], memo[j - weight] + price);	
		}
	}
	cout << memo[limit];
	
	return 0;
}
