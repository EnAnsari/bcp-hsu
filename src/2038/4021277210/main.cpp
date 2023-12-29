#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int EndInterval = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            EndInterval += A[i] * A[j];
        }
    }
    EndInterval *= 2;

    int i;
    for (i = 100; i <= EndInterval; i++)
    {
        int temp = i;

        int lenght = 0;
        while (temp > 0)
        {
            temp /= 10;
            lenght += 1;
        }

        temp = i;
        int second = 0;
        while (temp > 0)
        {
            int z = temp % 10;

            int pow = 1;
            for (int i = 0; i < lenght; i++)
            {
                pow *= z;
            }

            second += pow;
            temp /= 10;
        }

        if (i == second)
        {
            cout << i << endl;
        }
    }

    return 0;
}
