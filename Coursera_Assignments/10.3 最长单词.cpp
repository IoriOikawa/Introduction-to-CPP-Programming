#include <iostream>  

using namespace std;

int main()
{
	char s[500];
	while (cin.getline(s, 500)) {
		int max = 0,a=0,tmp=0, i = 0;

			for (i = 0;s[i] != '.';i++)
			{
				if (s[i] != ' ')
					tmp++;
				else
				{
					if (max < tmp)
					{
						max = tmp;
						a = i;
					}
					tmp = 0;
				}
			}
			if (max < tmp)
			{
				max = tmp -1;
				a = i - 1;
			}
			
			int len = 0;
			for (int i=0;s[i] != '.';i++)
				len = i+1;
//			int last = 0;
//			for (int i = len;s[i] != ' ';i--)
//				last++;
//			last--;
//			if (max < last)
//			{
//				for (int i = len - last;i < len;i++)
//					cout << s[i];
//			}
//			else
//			{
				for (int i = a-max;i <= a;i++)
					cout << s[i];
//			}
			cout << endl;
	}
	
	return 0;
}