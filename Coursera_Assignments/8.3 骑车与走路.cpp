#include <iostream>
#include <cmath>
#define EPSILON 1e-6

using namespace std;
int main(int argc, char *argv[]) {	
		int i, n;
		double distance, walk, bike;
		cin >> n;
		for(i = 0; i < n; ++i) {       
			cin >> distance;
			walk = distance / 1.2;
			bike = 27 + distance / 3 + 23;
			if(fabs(walk - bike) < EPSILON){
				cout << "All\n";}
			else if(walk < bike){
				cout << "Walk\n";}
			else{
				cout << "Bike\n";}
		}
		return 0;
}