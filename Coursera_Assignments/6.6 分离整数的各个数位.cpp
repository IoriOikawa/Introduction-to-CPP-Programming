#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char *argv[]) {
	//cin >> number;
	vector<int> digits;
	   int n, index=0;  
		cin >> n;  
		while (n > 0){   
			index++;  
			digits.push_back(n%10);
			n /= 10;  
		}  
		index -= 1;
		for (/* initialization */; index >= 0; index--) {
			cout << digits[index] << '\n';
		}
		//cout << endl;
		return 0;
}