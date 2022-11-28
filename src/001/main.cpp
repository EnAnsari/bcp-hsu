#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "\nEnter number: ";
    cin >> num;

    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }

    cout << "\nReverse of no. is " << rev_num;

	return 0;
}