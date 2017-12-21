#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    char letter[80] = {0};
    cin.getline(letter, 80);
    int count[5] = {0};
    for (int i = 0;i < 80;i++) {
        if (letter[i] == 'a') {
            count[0]++;
        }
        else if (letter[i] == 'e') {
            count[1]++;
        }
        else if (letter[i] == 'i') {
            count[2]++;
        }
        else if (letter[i] == 'o') {
            count[3]++;
        }
        else if (letter[i] == 'u') {
            count[4]++;
        }
    } 
    for (int i = 0; i < 5; i++){
        cout << count[i] << ' ';
    }
    cout << '\n';
}
