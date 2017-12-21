#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	char letter_1[80] = {0};
	char letter_2[80] = {0};
	cin.getline(letter_1, 80);
	cin.getline(letter_2, 80);
	
	int i;
	for(i = 0; i < 80; i++) {
		if ('a' <= letter_1[i] && letter_1[i] <= 'z') {
			letter_1[i] -= 'a' - 'A';
		}
		if ('a' <= letter_2[i] && letter_2[i] <= 'z') {
			letter_2[i] -= 'a' - 'A';
		}
	}
	for(i = 0; i < 80; i++) {
		if (letter_1[i] - letter_2[i] < 0) {
			cout << "<\n";
			return 0;
		}
		else if (letter_1[i] - letter_2[i] > 0) {
			cout << ">\n";
			return 0;
		}
	}
	cout << "=\n";
}