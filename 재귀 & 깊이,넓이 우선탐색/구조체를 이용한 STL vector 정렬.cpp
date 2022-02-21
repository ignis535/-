#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Location{
	int x, y, z;
	
	Location(int a, int b, int c){
		x = a;
		y = b;
		z = c;
	}
	
	bool operator<(const Location &Loc) const{
		if(x != Loc.x) return x < Loc.x;
		if(y != Loc.y) return y < Loc.y;
		if(z != Loc.z) return z < Loc.z;	
	}
};

int main(void){
	vector<Location> arr;
	
	arr.push_back(Location(3, 2, 1));
	arr.push_back(Location(4, 2, 1));
	arr.push_back(Location(1, 3, 2));
	arr.push_back(Location(5, 1, 3));
	arr.push_back(Location(3, 1, 2));
	sort(arr.begin(), arr.end());
	
	for(auto pos : arr) cout << pos.x << " " << pos.y << " " << pos.z << endl;
	
	return 0;
}
