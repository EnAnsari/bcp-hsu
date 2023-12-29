include <iostream>
using namespace std;
bool aval(int num) {                                                                                                                                        // تابع بررسی اینکه آیا یک عدد اول است یا خیر
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void print_primes_between(int a, int b) {                                                                                                                  // تابع چاپ اعداد اول بین دو عدد a و b
    for (int num = a; num <= b; num++) {
        if (aval(num)) {
            cout << num << "  ";
        }
    }
}

int main() {
    int a, b;     // ورودی‌ها را از کاربر دریافت کنید
    cout << "enter number : ";
    cin >> a;
    cout << "enter number: ";
    cin >> b;

    // اعداد اول بین a و b را چاپ کنید
 cout << "adad aval " << a << "   va   " << b << "    hast: ";
    print_primes_between(a, b);

    return 0;
}

