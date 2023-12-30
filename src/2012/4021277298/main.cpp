#include <iostream>
using namespace std;
int main(){
int Factorial = 1 ,n;
cin >>n;
for (int i = 1; i <= n ; i++)
{
    Factorial = Factorial * i;
}
cout <<Factorial;
    return 0;
}
