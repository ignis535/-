/*
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, number, cnt;
	bool isPrime;
	scanf("%d", &n);
	vector<int> prime;
	vector<int> result(1000);
	printf("%d! = ", n);
	
	for(i = 2; i <= n; i++){
		isPrime = true;
		for(j = 2; j * j <= i; j++){
			if(i % j == 0){
				isPrime = false;
				break;	
			}
		}
		if(isPrime) prime.push_back(i);
	}
	
	for(i = 2; i <= n; i++){
		number = i;
		for(j = 0; prime[j] <= i; j++){
			if(number == 1) break;
			cnt = 0;
			while(number != 1 && (number % prime[j] == 0)){
				number /= prime[j];
				cnt++;
			}
			result[j] += cnt;
		}
	}
	
	for(i = 0; i < prime.size(); i++){
		printf("%d ", result[i]);	
	}
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, j, tmp;
	scanf("%d", &n);
	vector<int> check(n, 0);
	
	for(i = 2; i <= n; i++){
		tmp = i;
		j = 2;
		while(tmp != 1){
			if(tmp % j == 0){
				tmp /= j;
				check[j]++;
			}
			else j++;
		}
	}
	
	printf("%d! = ", n);
	for(i = 2; i < n; i++){
		if(check[i] != 0) printf("%d ", check[i]);
	}
	return 0;	
}

