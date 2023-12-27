#include <iostream>
using namespace std;
int main(){
int n,S1 = 1,S2 = 2 ,temp ,counter = 2;
cin>>n;
while (S2 <= n)
{
    counter++;
    temp = S1 + S2;
    S1 = S2;
    S2 = temp;
}
int A[counter] , i = 2;
A[0] = 0,A[1] = 1,A[2] = 2 ;
S1 = 1,S2 = 2;
while (A[i] <= n)
{
    i++;
    temp = S1 + S2;
    S1 = S2;
    S2 = temp;
    A[i] = temp;
}
counter--;
while (n > 0 && counter > 0)
{
    if (n - A[counter] >= 0)
    {
        n = n - A[counter];
        cout<<counter<<" ";
    }
counter--;
}
    return 0;
}
