#include <iostream>
using namespace std;

#define N 100

int main() {

    double count = 0, sum = 0;
    int x;
    bool isPrime;

    for(int i = 0; i < N; i++) {
        cin >> x;
        if(x != 1)
            isPrime = true;
        for(int j = 2; j < x / 2; j++) {
            if(x % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true) {
            sum += x;
            count++;
        }
    }

    cout << sum / count;

    return 0;
}