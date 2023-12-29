#include <iostream>
using namespace std;
int main(){
    int a,b,i,j,n;
    cin>>a;
    cin>>b;
        for ( i = a; i <= b; i++)
        {
            n=0;
            for ( j = 2; j < i; j++)
            {
                if(i%j==0)
                {
                    n++;
                }
            }
            if(n==0)
            {
                cout<<i<<endl;
            }
            
        }
    
}
