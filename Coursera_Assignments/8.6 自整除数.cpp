#include <cmath>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int sum_digits(int n) {
	int sum = 0;
	for (;n != 0;n /= 10) {
		sum += n%10;
	}
	
	return sum;
}

int main(int argc, char *argv[]) {
	int n = 0;
	cin >> n;
	
	for (int i = 10;i < n;i++) {
		int sum = sum_digits(i);
		if (i % sum == 0) {
			cout << i << '\n';
		}
	}
}