#include <iostream>
using namespace std;

int main() {
    double S = 0, P = 200;
    int N, K, M = 0;
    int R[1000] = { 0 };
    int j = 0;

    while (cin >> N >> K) {
        M = 0; S = 0.0; P = 200.0;

        if (N < 10 || N > 50 || K < 1 || K > 20)
            break;
        else
        {
            for (int i = 0; i < 21; i++)
            {
                S = S + N;
                if (S < P)
                {
                    P = P*(1.0 + K / 100.0);
                    M++;
                }
                else 
                {
                    M++;
                    break;
                }
            }
            R[j] = M;
            j++;
        }
    }
    for (int i = 0; i < 1000; i++) {
        if (R[i] <= 20 && R[i] != 0)
            cout << R[i] << endl;
        else if (R[i] == 21)
            cout << "Impossible" << endl;
        else if (R[i] == 0)
            break;
    }
    return 0;
}
