#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int age = 0, num = 0;
	int a = 0, b = 0, c = 0, d = 0;
	cin >> num;
	int i = num;
	while (i--)
	{
		cin >> age;
		if (age <= 18)
		{
			a++;
		} 
		else if((19 <= age) && (age <= 35))
		{
			b++;
		}
		else if((36 <= age) && (age <= 60))
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	cout << "1-18: " << setiosflags(ios::fixed) << setprecision(2) << (float)a*100/num << "%" << endl;
	cout << "19-35: " << setiosflags(ios::fixed) << setprecision(2) << (float)b*100/num << "%" << endl;
	cout << "36-60: " << setiosflags(ios::fixed) << setprecision(2) << (float)c*100/num << "%" << endl;
	cout << "60-: " << setiosflags(ios::fixed) << setprecision(2) << (float)d*100/num << "%" << endl;
	return 0;
}
