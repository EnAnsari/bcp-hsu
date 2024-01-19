#include<iostream>
using namespace std ;
int main(){
int counter10,counter2,counter1,money;
cout<<"enter how much money do you have ?"<<endl;
cin>>money ;
if(money>=0){
    counter10= money/10 ;
    money=money%10 ;
    counter2=money/2 ;
    money=money%2;
    counter1=money ;
    cout<<counter10<<" seke 10 tomany"<<endl;
    cout<<counter2<<" seke 2 tomany"<<endl;
    cout<<counter1<<" seke 1 tomany"<<endl;
}
else cout<<"money is not corrct";
}
