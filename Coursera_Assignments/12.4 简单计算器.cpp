#include <iostream>
#include <string.h>

using namespace std;
int main(int argc, char *argv[]) {
	
	int a, b;
	char op[100];
	while (cin >> a >> b >> op) {
		if (strcmp(op, "/") == 0) {
			if (b == 0) {
				cout << "Divided by zero!";
			}
			else
			cout << a / b;
		}
		else if (strcmp(op, "+") == 0) {
			cout << a + b;
		}
		else if (strcmp(op, "-") == 0) {
			cout << a - b;
		}
		else if (strcmp(op, "*") == 0) {
			cout << a * b;
		}
		else cout << "Invalid operator!";
		cout << '\n';
	}
}