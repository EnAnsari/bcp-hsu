#include<iostream> 
#include <iomanip> 
 
using namespace std; 
 
void solve( long double number, int place) { 
   cout << setprecision( place ); 
   cout << number << endl; 
} 
 
long double mypow(long double x,unsigned int y) 
{ 
    long double z=x; 
    if(y==1) 
    { 
        return z; 
    } 
    return x* mypow(x,y-1); 
} 
int main() 
{ 
    long double base; 
    unsigned int exp; 
    cin>>base; 
    cin>>exp; 
    long double x; 
    x=mypow(base,exp); 
    solve(x,3); 
    return 0; 
}
