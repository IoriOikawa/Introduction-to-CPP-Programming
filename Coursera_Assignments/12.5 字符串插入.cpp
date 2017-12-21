#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    char str[11] = {'\0'}, substr[4] = {'\0'};
    while (cin >> str >> substr) {
        char max = '\0';
        int pos = 0;
        for (int i = 0; i < strlen(str); i++) {
            if (max < str[i]) {
                max = str[i];
                pos = i;
            }
        }
        for (int i = 0;i <= pos;i++) {
            cout << str[i];
        }
        cout << substr;
        for (int i = pos+1;i < strlen(str);i++) {
            cout << str[i];
        }
        cout << '\n';
    }
}
