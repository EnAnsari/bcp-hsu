#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || j == 1 || i == n || j == n)
                cout << "#";
            else if(i == j || i == n - j + 1 || ((i >= n - j + 1) && i < j))
                cout << "#";
            else cout << " ";
        }
        cout << endl;
    }


    return 0;
}
