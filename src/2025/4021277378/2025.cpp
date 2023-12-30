c++
#include <iostream>
using namespace std ; 
int main (){
  int n , a , b=1 ; 
  cin>> n;
  char A[n][2*n] ;
  a = n/2 ; 
  while(a>=0){
    for (int j=0 ; j<a ;j++) cout<<" ";
    for (int j=0 ; j<b ;j++) cout<<"*";
    for (int j=0 ; j<2*a ;j++) cout<<" ";
    for (int j=0 ; j<b ; j++) cout<<"*" ;
    for (int j=0 ; j<a ;j++) cout<<" ";
    cout<<endl ;
    a-- ; 
    b = b + 2 ; 
  }
  a = 1 ;
  b = n - 2 ; 
  while(a<=n/2){
    for (int j=0 ; j<a ;j++) cout<<" ";
    for (int j=0 ; j<b ;j++) cout<<"*";
    for (int j=0 ; j<2*a ;j++) cout<<" ";
    for (int j=0 ; j<b ; j++) cout<<"*" ;
    for (int j=0 ; j<a ;j++) cout<<" ";
    cout<<endl ;
    a++ ; 
    b = b - 2 ;    
  }
}
