#include <iostream>

using namespace std;

int main() {

    int n, cost;
    cout << "Enter your input: ";
    cin >> n;

    if(n <= 1000 && n >= 1)
        cost = 10;
    else if(n > 1000)
        cost = 12;
    else {
        cout << "Error!";
        cost = 0;
    }

    cout << "cost = " << cost;

    return 0;
}