#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char *argv[]) {
	int n = 0, k = 0;
	
	while (cin >> n >> k) {
		vector<int> numbers;
		for (int i = 0;i < n;i++) {
			int number;
			cin >> number;
			numbers.push_back(number);
		}
		
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1;j < n;j++) {
				if (numbers[i] +numbers[j] == k) {
					cout << "yes\n";
					return 0;
				}
			}
		}
		cout << "no\n";
	}
}