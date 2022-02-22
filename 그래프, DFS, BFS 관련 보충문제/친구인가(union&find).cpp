#include <stdio.h>
#include <vector>
using namespace std;

int unionFind[1001];

int find(int x){
	if(x == unionFind[x]) return x;
	else return unionFind[x] = find(unionFind[x]);	
}

void Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a != b) unionFind[a] = b;	
}

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, m;
	int i;
	int a, b;
	scanf("%d %d", &n, &m);
	
	for(i = 1; i <=n; i++){
		unionFind[i] = i;
	}
	
	for(i = 0; i < m; i++){
		scanf("%d %d", &a, &b);
		Union(a, b);	
	}
		
	scanf("%d %d", &a, &b);
	if(find(unionFind[a]) == find(unionFind[b])) printf("YES");
	else							 printf("NO");	
}
