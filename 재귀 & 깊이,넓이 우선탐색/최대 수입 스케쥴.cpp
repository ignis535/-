/*
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Course{
	int income, day;
	
	Course(int a, int b){
		income = a;
		day = b;
	}
	
	bool operator<(const Course &C) const{
		if(income != C.income) return income > C.income;
		if(day != C.day) 	   return day > C.day;	
	}
};

int check[10001] = {0, };

int main(void){
	// freopen("input.txt", "r", stdin);
	int n;
	int i, j, m, d, max, cnt, sum;

	scanf("%d", &n);
	
	vector<Course> arr;
	max = 0;
	for(i = 0; i < n; i++){
		scanf("%d%d", &m, &d);
		arr.push_back(Course(m, d));
		if(d > max) max = d;
	}
	sort(arr.begin(), arr.end());
	
	cnt = max;
	for(auto x : arr){
		if(check[x.day] == 0){
			check[x.day] = x.income;
			cnt--;
		}
		else{
			j = x.day;
			while(j >= 1 && check[j] != 0){
				j--;
			}
			
			if(j != 0){
				check[j] = x.income;
				cnt--;
			}
		}
		if(cnt == 0) break;
	}
	
	sum = 0;
	for(i = 1; i <= max; i++){
		sum += check[i];	
	}
	printf("%d", sum);
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct data{
	int money;
	int day;
	
	data(int a, int b){
		money = a;
		day = b;
	}
	
	bool operator<(const data &d) const{
		return day > d.day;	
	}
};

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, m, d, max, sum;
	scanf("%d", &n);
	
	vector<data> arr;
	max = 0;
	for(i = 0; i < n; i++){
		scanf("%d %d", &m, &d);
		arr.push_back(data(m, d));
		if(d > max) max = d;
	}
	sort(arr.begin(), arr.end());
	
	j = 0;
	priority_queue<int> pq;
	for(i = max; i >= 1; i--){
		for( ; j < n; j++){
			if(arr[j].day < i) break;
			pq.push(arr[j].money);
		}
		if(!pq.empty()){
			sum += pq.top();
			pq.pop();
		}
	}
	printf("%d", sum);
	
	return 0;
}
