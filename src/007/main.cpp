#include <iostream>

using namespace std;

int main() {

    int n, m;
    cout << "Enter size of A: ";
    cin >> n;

    cout << "Enter size of B: ";
    cin >> m;

    int A[n], B[m];

    cout << "Enter A: ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter B: ";
    for(int i = 0; i < m; i++) {
        cin >> B[i];
    }

    for(int i = 0; i < n; i++) {
        int result = 0;
        for(int j = 0; j < m; j++) {
            if(A[i] == B[j]) {
                result++;
            }
        }

        cout << A[i] << " : " << result << endl;
    }

    return 0;
}