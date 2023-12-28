#include<iostream>
using namespace std;
int fact(int n){
    int Fact[10]={1,1,2,6,24,120,720,5040,40320,362880};
    return Fact[n];
}

int main()
{

    int sum = 0,x,t;
    for(int n=1;n<=1000;n++){
        x=0;
        t=n;
        while(t>0){
            x=x+fact(t%10);
            t=t/10;
        }
        if(x==n)
            sum=sum+n;

    }

cout<<sum;
}
