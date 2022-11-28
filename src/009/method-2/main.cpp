#include <iostream>

using namespace std;
typedef unsigned long long int ulli;

#define START 10
#define END 99

ulli fact(int n) {
    ulli res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main() {

    for(int i = START; i <= END; i++)
        cout << i << " : " << fact(i) << endl;

    return 0;
}