#include <iostream>
using namespace std;
int main() {
    long int a, b, c,num ,sum, sw = 0,x, z, q,num1, num2,i ;
    cin >> a >> b >> c;
    if(a>=1&&a<=1000000&&b>=2&&c>=2&&b<=10&&c<=10){
    i = 1;
    sum = 0;
    z = a;
    }
    while (z >0) {
        q = z % 10;
        if (q >= b) {
            sw = 1;
            break;
        }
        z = z / 10;
    }
    if (sw == 0) {
        while (a > 0) {
            num = a % 10;
            sum = (num * i) + sum;
            i = i * b;
            a = a / 10;
        }
        x = 0;
        i = 1;
        while (sum > 0) {
            num = sum % c;
            x = (num * i) + x;
            sum = sum / c;
            i = i * 10;
        }
        num1 = x;
        num2 = 0;
        while (x > 0) {
            sum = x % 10;
            num2 = (num2 * 10) + sum;
            x = x / 10;
        }
        if (num1 == num2) {
            cout << "YES";
        } else {
            cout << "NO";
        }
}
return 0;
}
