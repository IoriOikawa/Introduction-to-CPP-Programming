#include <stdio.h>
#include <math.h>
#include <iostream>

int main(int argc, char *argv[]) {
	char example[128] = {0};
	char newline;
	while (scanf("%s%c", example, &newline)) {
		std::cout << example << '\n';
		int radius, height;
		std::cin >> radius >> height;
//		scanf("%d %d%c", &radius, &height, &newline);
		float bucket = (float)radius * radius * M_PI * (float)height;
		std::cout << (int)(ceil (20 * 1000 / bucket)) << '\n';
	}
}
