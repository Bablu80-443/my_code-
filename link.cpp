
#include <iostream>
using namespace std;

int main() {
    int n,check;
    cout << "Enter a number ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
       check = 1;

        for (int j = 2; j*j <= i ; j++) {
            if (i % j == 0) {
                check = 0;
                break;
            }
        }
        if (check) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

