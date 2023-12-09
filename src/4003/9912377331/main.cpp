#include <iostream>
using namespace std;

#define N 200

int main() {

    int arr[N];
    int dif, maxDif, maxDifIndex = 0;

    for(int i = 0; i < N; i++)
        cin >> arr[i];

    maxDif = arr[0] - arr[1];
    if(maxDif < 0)
        maxDif *= (-1);

    for(int i = 1; i + 1 < N; i++) {
        dif = arr[i] - arr[i + 1];
        if(dif < 0)
            dif *= (-1);
        if(maxDif < dif) {
            maxDif = dif;
            maxDifIndex = i;
        }
    }

    cout << "max different is " << maxDif << " in index: " << maxDifIndex << " and " << maxDifIndex + 1;

    return 0;
}