#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int num = 0;
	while (cin >> num) {
	
	int dividers[3] = {0};
	if (num % 3 == 0) {
		dividers[0] = 3;
	}
	if (num % 5 == 0) {
		dividers[1] = 5;
	}
	if (num % 7 == 0) {
		dividers[2] = 7;
	}
	
	int count = 0;
	for (int i = 0;i < 3;i++) {
		if (dividers[i] != 0) {
			count++;
		}
	}
	if (count == 0) {
		cout << "n\n";
	} else {
		for (int i = 0;i < 3;i++) {
			if (dividers[i] != 0) {
				if (count-1 == 0) {
					cout << dividers[i];
				} else {
					cout << dividers[i] << ' ';
				}
				count--;
			}
		}
	}
	
	cout << '\n';
	}
}