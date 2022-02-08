#include <iostream>
using namespace std;

int main(void){
	// freopen("input.txt", "rt", stdin);
	int n, i, max = -2147000000, min = 2147000000;
	int tmp;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> tmp;
		if(tmp > max) max = tmp;
		if(tmp < min) min = tmp;	
	}
	cout << max - min;
	
	return 0;	
}
