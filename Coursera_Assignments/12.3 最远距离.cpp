#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]) {
int n = 0;
	while (cin >> n) {
		double * xs = new double[n], * ys = new double[n];
		int t = 0;
		while (t != n) {
			double x, y;
			cin >> x >> y;
			xs[t] = x;
			ys[t] = y;
			t++;
		}
		double dis = 0;
		for (int i = 0;i < n - 1;i++) {
			for (int j = i;j < n;j++) {
				double x1 = xs[i], y1 = ys[i];
				double x2 = xs[j], y2 = ys[j];
				double distance = sqrt (pow(x1 - x2, 2) + pow(y1 - y2, 2));
				if (distance > dis) {
					dis = distance;
				}
			}
		}
		cout << fixed << setprecision(4) << dis << endl;
	}
	
}