#include <iostream>
#include <iomanip>
using namespace std;

//class neko {
//public:
//  int operator<< (int number) {
//      return number + 1;
//  }
//  char * operator<< (char * str) {
//      return "iori";
//  }
//};
int main(int argc, char *argv[]) {
    int array[5][5] = {0};
    while (cin >> array[0][0]) {
        for (int j = 1; j < 5; j++) {
            cin >> array[0][j];
        }
        for (int i = 1; i < 5; i ++) {
            for (int j = 0; j < 5; j++) {
                cin >> array[i][j];
            }
        }
        int n = 0, m = 0;
        cin >> n >> m;
        if (0 <= n && n <= 4 && 0 <= m && m <= 4) {
            for (int col = 0;col < 5;col++) {
                int tmp = array[n][col];
                array[n][col] = array[m][col];
                array[m][col] = tmp;
            }
            
            for (int i = 0; i < 5; i ++) {
                for (int j = 0; j < 5; j++) {
                    cout << setw(4) << array[i][j];
                }
                cout << '\n';
            }
            
        }
        else cout << "error\n"; 
    }
//  neko cocoa;
//  cout << (cocoa.operator<<(4)) << (cocoa << "meow~");
}
