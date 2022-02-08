#include <iostream>
using namespace std;

int main(void){
	int a, b, sum, i;
	
	cin >> a >> b;
	sum = 0;
	for(i = a; i < b; i++){
		cout << i << " + ";	
		sum += i;
	}
	cout << i << " = ";
	cout << sum + i << endl;
	
	return 0;	
}
