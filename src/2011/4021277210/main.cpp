#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n; cin>>n;
    int max; cin>>max;
    for (int i = 2; i <= n; i++)
    {
        int x; cin>>x;
        max = (x > max) ? x : max;
    }
    return 0;
}
