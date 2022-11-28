#include <iostream>

using namespace std;
typedef unsigned long long int ulli;

#define START 10
#define END 99

ulli fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
    // single line to find factorial
    // return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

int main() {

    for(int i = START; i <= END; i++)
        cout << i << " : " << fact(i) << endl;

    return 0;
}