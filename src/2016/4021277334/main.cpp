#include <iostream>
using namespace std;
void khayyam(int n) {
    for (int i = 0; i < n; i++) {
        int coef = 1;
        for (int j = 0; j <= i; j++) {
            if (j > 0)
                coef = coef * (i - j + 1) / j;
            cout <<coef<< "  ";
        }
        cout <<endl;
    }
}
int main() {
    int numbers;
   cin >> numbers;
    khayyam (numbers);
    return 0;
}
