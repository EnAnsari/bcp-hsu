#include<iostream>
using namespace std;
int main(){
int n ;
cin>> n ;
int A[n] ;
for(int i=0;i<n ;i++) {
    cin>> A[i] ; 
}
int m ;
cin>> m ;
int B[m] ;
for(int i=0 ;i<m ;i++){
    cin>> B[i] ;
}
int C[100] ;
for(int i=0; i<n || i<m ;i++){
    C[i]=A[i]+B[i];
    cout<<C[i] ; 
}


}
