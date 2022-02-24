/*
#include <fstream>
#include <iostream>
#include <map>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");
	map<char, int> check;
	map<char, int>::iterator it;
	char str[100];	
	cin >> str;
	
	for(int i = 0; str[i] != '\0'; i++){
		check[str[i]]++;	
	}
	
	for(it = check.begin(); it != check.end(); it++){
		cout << it -> first << " " << it -> second << "\n";
	}
	
	return 0;
}
*/
#include <fstream>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");
	
	map<string, int> check;
	map<string, int>::iterator it;
	
	int n, max;
	string str, result;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> str;
		check[str]++;
	}
	
	max = 0;
	for(it = check.begin(); it != check.end(); it++){
		if(it -> second > max){
			max = it -> second;
			result = it -> first;	
		}
	}
	cout << result << " : " << max;
	
	return 0;
}
