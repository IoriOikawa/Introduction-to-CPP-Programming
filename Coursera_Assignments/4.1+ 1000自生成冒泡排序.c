#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, j, a[1000], n = 0;
	for (i = 0;i < 1000;i++)
		a[i] = rand() % 3000 + 1; //产生随机数(3000以内的)
	for (i = 0;i < 1000;i++) {
		for (j = i + 1;j < 1000;j++) {
			//交换
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				n++;
			}
		}
		if (i % 15 == 0)
			printf("\n");
		printf("%d ", a[i]);
	}
	printf("\n次数:%d\n", n);
	return 0;
}
