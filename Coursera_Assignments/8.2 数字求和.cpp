#include <cmath>
#include <iostream>
#include <limits.h>

using namespace std;
int main(int argc, char *argv[]) {
	int numbers[6] = {0};
	for (int i = 0; i < 6; i++) {
		cin >> numbers[i];
	}
	int sum = 0;
	for (int i = 1; i < 6; i++) {
		if (numbers[i] < numbers[0]) {
			sum += numbers[i];
		}
	}
	cout << sum << "\n";
}