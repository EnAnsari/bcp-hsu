#include <iostream>
using namespace std;
int main(){
long long int n;
cin>>n;
int b = 0,temp,temp_n = n;
while (temp_n != 0)
{
    temp = temp_n % 10;
    temp_n /= 10;
    b = temp + b;
}
n++;
while (b != 0)
{
    bool isPrime = true;
    for (int divisor = 2; divisor < n && isPrime == true; divisor++)
    {
        if (n % divisor == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime == true)
    {
        b--;
    }
n++;
}
cout<<n-1;
    return 0;
}
