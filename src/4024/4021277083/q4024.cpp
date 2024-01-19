#include <iostream>
using namespace std;
int main() {
    int number[1000];

    for (int i = 0; i < 1000; i++) {
        number[i] = 1;
    }

    for (int i = 2; i < 1000 ; i++) {
        if (number[i] == 1) {
            for (int j = i+i; j < 1000; j=j+i) {
                if (j % i == 0) {
                    number[j] = 0;
                }
            }
        }
    }

    for (int i = 2; i < 1000; i++) {
        if (number[i] == 1) {
            cout << i <<endl;
        }
    }

    return 0;
}
