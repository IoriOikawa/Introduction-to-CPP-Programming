#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int n, m;
    cin >> n >> m;
    int numbers[2 * n];
    for (int i = 0;i < n;i++) {
        cin >> numbers[i];
    }
    for (int i = 0;i < n - m;i++) {
        numbers[n + i] = numbers[i];
    }
    for (int i = n - m;i < n + n - m;i++) {
        cout << numbers[i] << ' ';
    }
    cout << '\n';
}
