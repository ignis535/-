/*
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int s, n, oper, size, i, j, k, tmp;
	bool isHit;
	scanf("%d%d", &s, &n);
	vector<int> cache(s);
	
	size = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &oper);
		if(size == 0){
			cache[0] = oper;	
			size++;
		}
		else{
			isHit = false;
			for(j = 0; j < size; j++){
				if(cache[j] == oper){
					tmp = oper;
					for(k = j - 1; k >= 0; k--){
						cache[k + 1] = cache[k];	
					}
					cache[0] = oper;
					isHit = true;
				}
			}
			if(!isHit){
				if(size == s){
					for(k = size - 2; k >= 0; k--){
						cache[k + 1] = cache[k];
					}
					cache[0] = oper;
				}
				else{
					for(k = size - 1; k >= 0; k--){
						cache[k + 1] = cache[k];	
					}
					cache[0] = oper;
					size++;
				}
			}
		}
	}
	
	for(i = 0; i < s; i++){
		printf("%d ", cache[i]);	
	}
	
	return 0;
}
*/
#include <stdio.h>
#include <vector>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int s, n, i, j, k, oper, pos;
	scanf("%d%d", &s, &n);
	vector<int> cache(s, 0);
	
	for(i = 0; i < n; i++){
		scanf("%d", &oper);
		pos = -1;
		for(j = 0; j < s; j++){
			if(cache[j] == oper) pos = j;	
		}
		if(pos == -1){
			for(k = s - 1; k >= 1; k--){
				cache[k] = cache[k - 1];
			}
		}
		else{
			for(k = pos; k >= 1; k--){
				cache[k] = cache[k - 1];	
			}
		}
		cache[0] = oper;
	}
	
	for(i = 0; i < s; i++){
		printf("%d ", cache[i]);	
	}
		
}
