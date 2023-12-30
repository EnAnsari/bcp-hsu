#include <iostream>
using namespace std;
int main()
{
    long int n, m, temp;
    cin >> n;
    cin >> m;
    long int greater = (m > n) ? m : n;
    long int smaller = (m > n) ? n : m;
    while (smaller != 0)
    {
        temp = greater % smaller;
        greater = smaller;
        smaller = temp;
    }
    cout << greater << " " << (m * n) / greater;
    return 0;
}