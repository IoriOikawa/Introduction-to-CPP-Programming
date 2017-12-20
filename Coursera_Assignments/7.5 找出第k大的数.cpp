#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n = 0, k = 0;
	int a[100];
	cin >> n >> k;
	/****************输入数据********************/
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	/****************利用排序法找出第k大的数********************/
	for (int i = 0; i < k; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}
	/****************输出结果********************/
	cout << a[k-1] << endl;
	return 0;
}
