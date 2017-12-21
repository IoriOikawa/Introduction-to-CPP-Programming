#include <iostream>
using namespace std;

/* 
 * 公历纪年法中，能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年
 * 能被3200整除的也不是闰年，如1900年是平年，2000年是闰年，3200年不是闰年。
 */  
int main() {
    int year, leapyear = 1;
    cin >> year;
    if (year % 4 != 0) leapyear = 0;
    else {
        if (year % 100 == 0 && year % 400 != 0) leapyear = 0;
        if (year % 3200 == 0) leapyear = 0;
    }
    cout << (leapyear ? "Y" : "N") << endl;
    return 0;
}
