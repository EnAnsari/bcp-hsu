#include <iostream>
using namespace std;

#define A 5
#define B 10

int main() {
    int matrix[A][B];

    for(int i = 0; i < A; i++)
        for(int j = 0; j < B; j++)
            cin >> matrix[i][j];
    
    int min[B];
    for(int i = 0; i < A; i++) {
        min[i] = matrix[0][i];
        for(int j = 1; j < B; j++) {
            if(min[i] > matrix[j][i])
                min[i] = matrix[j][i];
        }
    }

    int max = min[0];
    for(int i = 0; i < A; i++)
        if(max < min[i])
            max = min[i];

    cout << max;

    return 0;
}