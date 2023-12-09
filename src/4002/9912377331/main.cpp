#include <iostream>
using namespace std;

int main() {

    int sum;
    for(int i = 1000; i < 10000; i++) {
        sum = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0)
                sum++;
            if(sum > 5) {
                cout << i << " ";
                break;
            }
        }
    }

    return 0;
}