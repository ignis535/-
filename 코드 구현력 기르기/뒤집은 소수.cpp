#include <stdio.h>
using namespace std;

int reverse(int);
bool isPrime(int);

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, tmp;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		tmp = reverse(tmp);
		if(isPrime(tmp)) printf("%d ", tmp);
	}
}

int reverse(int x){
	int result = 0;
	while(x != 0){
		result = result * 10 + x % 10;
		x /= 10;
	}
	return result;
}

bool isPrime(int x){
	if(x == 1) return false;
	int i;
	bool flag = true;
	for(i = 2; i < x; i++){
		if(x % i == 0) flag = false;
	}
	return flag;
}
