#include<iostream>
using namespace std ;
int main(){
int m , i , maj=0 ;
cin>> i ;
while (i>0){
    m = i % 10 ;
    i = i / 10 ;
    maj = maj + m ;
}
cout<< maj ;
}
