#include<iostream>
using namespace std;
int main(){
    unsigned long long int number , sum=0,power,i=1 ;
cout<<"enter number bar mabnaye 10"<<endl;
cin>>number;
if(number>=0){
    while(number>0){
        power=number%2;
        number=number/2;
        sum=(power*i)+sum;
        i=i*10;
    }
    cout<<"number bar mabnaye 2 is : "<<sum;
}
else cout<<"number is not correct" ;
}
