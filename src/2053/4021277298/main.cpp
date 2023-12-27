#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
long long int a,b ,inverse_c = 0,c = 0;
cin>>a>>b;
int temp_digit;
while (a != 0)
{
    temp_digit = a % b;
    inverse_c = (inverse_c * 10) + temp_digit;
    a /= b;
}
while (inverse_c != 0)
{
    temp_digit = inverse_c % 10;
    inverse_c /= 10;
    c = (c * 10) + temp_digit;
}

int temp = c,digits = 0;
while (temp != 0)
{
    temp /= 10;
    digits++;
}
char C[digits];
// learned from barnamenevis.org
sprintf(C,"%d",c);
int sum1 = 0,sum2 = 0,i1 = 0,i2 = 1;
if (digits % 2 == 0)
{
    while (i2 <= digits)
    {
        sum1 += C[i1];
        sum2 += C[i2];
        i1 = i1 + 2;
        i2 = i2 + 2;
    }
}
else
{
    while (i1 <= digits)
    {
        sum1 += C[i1];
        i1 = i1 + 2;
    }
    while (i2 <= digits - 1)
    {
        sum2 +=C[i2];
        i2 = i2 + 2;
    }
}
if (sum1 == sum2)
{
    cout<<"Yes";
}
else
{
    cout<<"No";
}
    return 0;
}
