#include <iostream>
using namespace std;
typedef long long int ull;
#define MAX 63
void func(ull x, ull y, ull k, ull exp[], ull count[]) {
    if(x == 0 || y == 0) return;
    ull count_row = x / exp[k];
    ull count_col = y / exp[k];
    ull num = count_col * count_row;
    if(num) {
        count[k] += num;
    }
    else {
        func(x, y, k - 1, exp, count);
        return;
    }

    func(x - count_row * exp[k], count_col * exp[k], k - 1, exp, count);
    func(x, y - count_col * exp[k], k - 1, exp, count);
}

int main() {
    ull exp[MAX], j = 1;
    for(ull i = 0; i < MAX; i++, j *= 2)
        exp[i] = j;
    
    ull count[MAX] = {0};
    ull n, m;
    cin >> n >> m;

    func(m, n, MAX - 1, exp, count);
    for(ull i = MAX - 1; i >= 0; i--)
        if(count[i])
            cout << count[i] << " " << exp[i] << "*" << exp[i] << " tiles" << endl;

    return 0;
}
