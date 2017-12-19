#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int grade = 0;
		cin >> grade;
		if ((grade >= 95)&&(grade <= 100))
		{
			cout << "1" << endl;
		}
		else if ((grade >= 90)&&(grade < 95))
		{
			cout << "2" << endl;
		}
		else if ((grade >= 85)&&(grade < 90))
		{
			cout << "3" << endl;
		}
		else if((grade >= 80)&&(grade < 85))
		{
			cout << "4" << endl;
		}
		else if ((grade >= 70)&&(grade < 80))
		{
			cout << "5" << endl;
		}
		else if ((grade >= 60)&&(grade < 70))
		{
			cout << "6" << endl;
		}
		else
		{
			cout << "7" << endl;
		}
		return 0;
}