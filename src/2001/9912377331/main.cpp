#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int matrix[n + 1][k + 1];
    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < k + 1; j++) {
            if(i < j) {
                matrix[i][j] = 0;
            }
            else if(i == 0 || j == 0) {
                matrix[i][j] = 1;
            }
            else {
                matrix[i][j] = matrix[i - 1][j] + matrix[i - 1][j - 1];
            }
        }
    }

    int result1 = matrix[n][k];

    int a = 1, b = 1;
    for(int i = 1; i <= k; i++) {
        a = a * (n - k + i);
        b = b * i;
    }
    int result2 = a / b;

    cout << "result 1 = " << result1 << endl;
    cout << "result 2 = " << result2 << endl;

    return 0;
}