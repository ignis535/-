#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	// freopen("input.txt", "r", stdin);
	int n, i, p2, p3, p5, minimum;
	scanf("%d", &n);
	vector<int> result(n + 1);
	
	result[1] = p2 = p3 = p5 = 1;
	minimum = 2147000000;
	for(i = 2; i <= n; i++){
		minimum = min({result[p2] * 2, result[p3] * 3, result[p5] * 5});
		result[i] = minimum;
		if(result[p2] * 2 == minimum) p2++;
		if(result[p3] * 3 == minimum) p3++;
		if(result[p5] * 5 == minimum) p5++;
	}
	printf("%d", result[n]);
	
	return 0;		
}
