#include <cmath>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
    // height
    int count;
    cin >> count;
    int max_score = -1;
    while (count--) {
        int score;
        cin >> score;
        if (score > max_score) {
            max_score = score;
        }
    }
    
    cout << max_score << '\n';
}
