#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                A[i][j] = 1;
                continue;
            }
            A[i][j] = A[i-1][j-1] + A[i-1][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}