#include <iostream>

using namespace std;

int main() {

    int a, b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int min, max;
    if(a < b) {
        min = a;
        max = b;
    }
    else {
        min = b;
        max = a;
    }

    int result = 0;
    for(; max >= min;) {
        max -= min;
        result++;
    }
    cout << "result = " << result;
 
    return 0;
}