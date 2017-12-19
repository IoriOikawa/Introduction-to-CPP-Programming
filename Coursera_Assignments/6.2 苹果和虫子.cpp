#include <cmath>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
    // number of apples
    int number_of_apple;
    // eat 1 apples per x hours
    int x;
    // total time for eating
    int time_for_eating;
    
    // input
    cin >> number_of_apple >> x >> time_for_eating;
    int eaten = (int)(ceil((double)time_for_eating / (double)x));
    
    if (eaten > number_of_apple) {
        eaten = number_of_apple;
    }
    cout << number_of_apple - eaten << '\n';
}
