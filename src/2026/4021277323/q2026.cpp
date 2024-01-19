#include <iostream>
using namespace std;
typedef unsigned long long int ull;
char Word(int temp) {
    switch (temp) {
        case 10: return 'A';
        case 11: return 'B';
        case 12: return 'C';
        case 13: return 'D';
        case 14: return 'E';
        case 15: return 'F';
        default: return temp +'0';
    }
}
int main() {
    ull n;
    cin >> n;
    int b, temp;
    char A[1000] = {0};
    cin >> b;
    int i = 0;
    while (n != 0) {
        temp = n % b;
        if (temp >= 10) {
            A[i++] = Word(temp);
        } else {
            A[i++] = Word(temp);
        }
        n /= b;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << A[j];
    }
    return 0;
}