#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void solve(long double number, unsigned int place) {
    cout << fixed << setprecision(place);
    cout << number << endl;
}
int main() {
long double Vx, Vy, Y, h, t1, t2;
cin >> Vx >> Vy >> Y >> h;
    if (Vy * Vy + 20 * (Y - h) < 0)
    {
        cout << "impossible";
    } 
    else 
    {
        t1 = (-Vy + sqrt(Vy * Vy + 20 * (Y - h))) / -10;
        t2 = (-Vy - sqrt(Vy * Vy + 20 * (Y - h))) / -10;
    }
        if (t1 > 0) 
        {
            solve(t1 * Vx, 2); 
            t2 = 0;
        } 
        else if (t2 > 0) 
        {
            solve(t2 * Vx, 2); 
        }
    return 0;
}
