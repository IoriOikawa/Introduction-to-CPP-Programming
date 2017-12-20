#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int sum;    
	int a[6] = { 0 };//a[0]：100,a[1]：50,a[2]：20,a[3]：10,a[4]：5,a[5]：1;    
	cin >> sum;    
	int piao[6] = {100, 50, 20, 10, 5, 1};    
	for (int i = 0; i < 6; i++)    
	{    
		a[i] = sum / piao[i];    
		sum = sum % piao[i];    
		cout << a[i] << endl;    
	}    
	return 0;    
}
