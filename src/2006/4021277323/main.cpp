#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a; cin>>a;
    int b; cin>>b;
    int max = (a > b) ? a : b;
    int min = (a > b) ? b : a;
    int i;
    for (i = min ; i <= max ; i++)
    {
        bool flg = true;
        for (int j = 2; j < i ; j++)
        {
            if (i%j == 0)
            {
                flg = false;
            } 
        }

        if (flg && i!=1)
        {
            cout<< i <<endl;
        }
        
    }
    


    return 0;
}
